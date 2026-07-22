#include <iostream>
using namespace std;

int main(){
    int x = 23456;
    //Set the lowest 0 bit of x
    //by adding 1 to x, we are setting the lowest cleared bit, but, we are also clearing the 1's below it
    x |= (x + 1); //so we or with original number 

    //Clear the lowest set bit
    //by x - 1, we clear the lowest set bit, but also set the lower 0 bits so
    //we also AND it ith the previous number
    x &= (x-1);
    return 0;
}
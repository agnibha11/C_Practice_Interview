#include <cstdio>
using namespace std;

//next power of 2
unsigned int nextPow2(unsigned int n){
    //decrement by 1 to cover the corner case when n is aleady a power of 2
    if(n == 0) return 1;
    n--;
    
    //smear all the lower bost to the most 
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    //now we add 1 to it that makes all lower bits 0, except the most significant set bit
    return (n + 1);
}

int main(){
    unsigned int a = 34;
    printf("Next pow of 2 of %d is %d\n",a, nextPow2(a));

}
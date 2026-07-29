#include <cstdio>
using namespace std;


int main(){

    int a = 2333, b = 3345;
    int mask = 0xFF234ABE;

    int val1 = (a & ~mask) | (b & mask);

    //another approach
    int val2 = a ^ ((a ^ b) & mask); //bitwies operation

    printf("Extracted values: %d and %d\n", val1, val2);

    return 0;
}
#include <stdio.h>

int main(){

    //Swap 2 variables wihthout using temp variable
    //The idea is: a ^ a ^ b = b
    int a = 12;
    int b = 44;
    printf("Before swap: %d %d\n", a, b);

    a ^= b; //a = a ^ b
    b ^= a; // b = b ^ a ^ b = 0 ^ a = a
    a ^= b; //a = a ^ a ^ b = 0 ^ b = b
    printf("After swap: %d %d", a, b);

    return 0;
}
#include <stdio.h>

int main(){
    //the integer
    unsigned int X = 1045; // 1010 in binary
    int n = 6;
    printf("Starting number: %u, bit to manipulate %d\n", X,n);
    //SET the nth bit OR operation
    unsigned set;
    set = X | 1U << n;
    printf("%d th bit set result: %u \n",n,set);

    //CLEAR the NTH bit AND operation
    unsigned clear;
    clear = X & ~(1U << n);
    printf("%d th bit clear result: %u \n",n,clear);

    //Toggle the nth bit //using XOR to invert
    unsigned toggle;
    toggle = X ^ (1U << n);
    printf("%d th bit toggle result: %u \n",n,toggle);

    //TEST the nth bit, so we bring that bit to LSB and mask everything else
    unsigned test;
    test = (X >> n) & (1U);
    printf("%d th bit test result: %u \n",n,test);


    return 0;
}
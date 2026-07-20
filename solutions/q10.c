#include <stdio.h>

int parity(int x){
    //32 bit number so we have to use XOR folding
    //Similar to reduction XOR
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
}

int main(){
    //compute the parity of a 32 bit word
    printf("Parity is: %d\n", parity(23457));
    return 0;
}
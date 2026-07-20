#include <stdio.h>

//Simple loop method
unsigned reverse_loop(unsigned x){
    unsigned r = 0;
    for(int i = 0; i < 32; i++){
        r = (r << 1) | (x & 1U); //Shift the LSB of x into r
        x >>= 1; //Left shift x for new LSB
    }
    return r;
}

//Divide and conquer method
unsigned reverse_swap(unsigned x){
    //Swap the even/odd bits
    x = ((x >> 1) & 0x55555555) | ((x << 1) & 0xaaaaaaaa); 

    //Swap the bit pairs
    x = ((x >> 2) & 0x33333333) | ((x << 2) & 0xcccccccc);

    //Swap the nibbles
    x = ((x >> 4) & 0x0f0f0f0f) | ((x << 4) & 0xf0f0f0f0);

    //Swap the bytes
    x = ((x >> 8) & 0x00ff00ff) | ((x << 8) & 0xff00ff00);

    //Swap the half words
    x = (x >> 16) | (x << 16);

    return x;
}

int main() {

    unsigned a = 2345678923;

    printf("Loop reversed: %u\n", reverse_loop(a));
    printf("Swap reversed: %u\n", reverse_swap(a));

    return 0;
}
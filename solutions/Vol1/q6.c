#include <stdio.h>

int main(){
    unsigned reg = 2345678923;
    unsigned mode = reg & 0x000000f0; //extract mode
    unsigned m = 11; //0x1011
    //write the new mode
    printf("%u has mode %u\n",reg, mode);
    reg =  (reg & 0xffffff0f) | ((m << 4) & 0x000000f0);
    printf("Value after new mode inserted: %u", reg);
    return 0;
}
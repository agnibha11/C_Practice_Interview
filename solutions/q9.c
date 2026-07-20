#include <stdio.h>

int main(){
    unsigned char x = 0xab;
    //Swap the nibbles
    x = (x >> 4) | (x << 4);
    printf("Swapped value: %02x\n",x);
    printf("Swapped value (uppercase hex): %02X\n",x);
    return 0;
}
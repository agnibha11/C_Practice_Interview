#include <stdio.h>

int main() {
    unsigned int a, b;
    a = 1024;
    b = 1023;
    printf("%u check %d\n",a,is_power(a));
    printf("%u check %d\n",b,is_power(b));
    return 0;
}

int is_power(unsigned int x){
    // A power of 2 will have exactly 1 bit set and all else 0
    //if its a power of 2, subtracting 1 means it will have only 1 0, so ending them must always give 0
    return x != 0 && ((x & (x-1)) == 0);
}
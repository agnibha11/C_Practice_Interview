#include <stdio.h>

int main(){
    unsigned a = 8;
    unsigned x = a << 3; //multiply by 8
    unsigned y = a >> 2; //divide by 4
    unsigned z = (a << 3) + (a << 1); //x*10 = x*(8+2)
    printf("%u: multiply by 8: %u\ndivide by 4: %u\nmultiply by 10: %u\n",a,x,y,z);
    return 0;
}
#include <stdio.h>

int main(){
    unsigned a = 1345;
    unsigned b = 1222;

    //To check even or odd, we can simply inspect the last bit
    printf("%u is odd: %d\n",a,(a & 1U));
    printf("%u is odd: %d\n",b,(b & 1U));
    return 0;
}
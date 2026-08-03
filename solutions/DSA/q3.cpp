#include <cstdio>
using namespace std;

//reverse the bits
int reverser(int val){
    //swap even and odd places
    val = ((val >> 1) & 0x55555555) | ((val << 1) & 0xaaaaaaaa);
    //Swap the bit pairs
    val = ((val >> 2) & 0x33333333) | ((val << 2) & 0xcccccccc);
    //swap the bit quads
    val = ((val >> 4) & 0x0f0f0f0f) | ((val << 4) & 0xf0f0f0f0);
    //swap the bit octs
    val =  ((val >> 8) & 0x00ff00ff) | ((val << 8) & 0xff00ff00);
    //swap the half-wwords
    val = ((unsigned)val >> 16) | (val << 16);
    return val; 
}

int main(){
    int a = 0xabcd1234;

    printf("Reverse of %0X is: %0X\n", a, reverser(a));

}
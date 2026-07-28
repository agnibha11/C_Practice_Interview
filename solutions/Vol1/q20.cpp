#include <cstdio>
using namespace std;

//function to byte swap 16 bit value
unsigned short swap16(unsigned short x){
    return (unsigned short)((x << 8) | (x >> 8));
}

//function to byte swap 32 bit value
unsigned int swap32(unsigned int x){
    x = ((x >> 8) & (0x00FF00FF)) | ((x << 8) & (0xFF00FF00)); //first swap
    x = (x >> 16) | (x << 16);
    return x;
}

int main(){
    unsigned int a = 0xabcdef12;
    unsigned short b = 0xabcd;

    printf("16 bit swap: %u\n", swap16(b));
    printf("32 bit swap: %u\n", swap32(a));

    return 0;
}
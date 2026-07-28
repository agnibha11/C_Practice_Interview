#define CTRL = ((volatile unsigned char *)(0x40021000u))
//CTRL is now a pointer poitin ti this memory location
#define STATUS = ((volatile unsigned int *)(0x40021004u))
//STATUS is a pointer to the 32 bit status register

#include <cstdio>
using namespace std;

int main(){
    *CTRL = 0x5A;

    while((*STATUS) & (1u << 3) == 0); //loops till the status is 1
    //It polls the value of status every loop only beause its volatile
}
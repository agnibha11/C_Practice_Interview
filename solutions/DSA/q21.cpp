#include <cstdio>
using namespace std;

unsigned int swapOddEven(unsigned int val){
    return (((val >> 1) & 0x55555555) | ((val << 1) & 0xaaaaaaaa));
}


int main(){
    return 0;
}
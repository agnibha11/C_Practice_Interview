#include <cstdio>
using namespace std;

int parity(unsigned val){
    //We can perform reduction XOR by folding
    val ^= val >> 16;
    val ^= val >> 8;
    val ^= val >> 4;
    val ^= val >> 2;
    val ^= val >> 1;

    //THE lsb has the result of the Reduction XOR
    return val & 1u;
}

int main(){
    int a = 0x01000000;
    int b = 0x11000000;

    printf("No of set bits: %d\n", parity(a));
    printf("No of set bits: %d\n", parity(b));

    return 0;
}
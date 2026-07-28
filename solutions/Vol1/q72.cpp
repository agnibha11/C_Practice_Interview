#include <cstdio>
using namespace std;

//opposite sign
unsigned int opp_sign(int a, int b){
    return ((a & 0x80000000) ^ (b & 0x80000000)) >> 31;
}

//detect overflow
unsigned int overflow(int a, int b){
    int sum  =  a + b;
    //overflow happens when the carry out is not equal to the carry in
    unsigned cout = (sum < a) ? 1 : 0;
    
    // Calculate Carry In to MSB
    // Using the reversed XOR addition formula on the 31st bit
    unsigned cin = ((a ^ b ^ sum) >> 31) & 1;
}

int main(){

    int a = -12, b = 32, c = -11;

    printf("%d and %d opposite: %d\n", a, b, opp_sign(a,b));
    printf("%d and %d opposite: %d\n", a, c, opp_sign(a,c));

    return 0;
}
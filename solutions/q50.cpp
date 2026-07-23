#include <cstdio>
using namespace std;

unsigned char encode(unsigned char d){
    unsigned p = d;
    p ^= (p >> 4);
    p ^= (p >> 2);
    p ^= (p >> 1);

    //if p is 1, we have to add a 1 to MSB
    return (unsigned char)(((p & 1) << 7) | d);
}

int check (unsigned char x){
    //again find the parit by XOR folding
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return (x & 1) == 0; //There should be even 1s now

}

int main(){
    unsigned char a = 0x5F;

    unsigned char parity = encode(a);
    printf("Parity is now: %u\n", check(parity));

    return 0;
}
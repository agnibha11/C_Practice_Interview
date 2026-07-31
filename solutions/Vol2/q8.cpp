#include <cstdio>
using namespace std;

int diff_one_bit(unsigned int a, unsigned int b){
    unsigned d =  a ^ b;

    //If it differs by one bit, then the whole thing is a power of 2
    //So we can either popcount the whole thing, or clever way is
    return ((d != 0) && ((d & (d - 1)) == 0));
}

int main(){

    unsigned int a = 0x01000000;
    unsigned int b = 0x00000000;
    unsigned int c = 0x00000001;

    printf("Different in only one place: %d\n", diff_one_bit(a,b));
    printf("Different in only one place: %d\n", diff_one_bit(a,c));

    return 0;
}
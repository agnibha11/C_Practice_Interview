#include <cstdio>
using namespace std;

int findComplement(int num){
    unsigned int mask = num;
    //smear all the lower bits
    mask |= mask >> 1;
    mask |= mask >> 2;
    mask |= mask >> 4;
    mask |= mask >> 8;
    mask |= mask >> 16;

    //Now XOR the value
    return (num ^ (mask));
}
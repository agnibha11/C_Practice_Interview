#include <cstdio>
using namespace std;

unsigned int highest_set(unsigned val){
    //find the highest set bit in a number

    //we smear all the lower bits with 1
    val |= val >> 1;
    val |= val >> 2;
    val |= val >> 4;
    val |= val >> 8;
    val |= val >> 16;
    
    return (val >> 1) + 1u;
}

//clear the highest set bit
unsigned int clear_highest(unsigned val){
    //Since we already have the highest bit, we simply mask it
    unsigned int mask = highest_set(val);
    return (val & ~mask);
}

int main(){

    unsigned int a = 0x00001ab0;
    printf("Highest set bit: %u\n",highest_set(a));
    printf("After highest bit cleared: %u\n", clear_highest(a));

    return 0;
}
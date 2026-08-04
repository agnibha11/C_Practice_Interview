#include <cstdio>
using namespace std;

//set a bit
unsigned int setBit(int val, int n){
    return (val | (1u << n));
}

//Clear a bit
unsigned int clearBit(int val, int n){
    return val & ~(1u << n);
}

//Toggle a bit
unsigned int toggleBit(int val, int n){
    return val ^ (1u << n);
}

//Test a bit
unsigned int testBit(int val, int n){
    return (val >> 1) & 1u;
}


int main(){

}
#include <cstdio>
using namespace std;

unsigned extract(unsigned val, int hi, int lo){
    val >>= lo; //Right align the block

    //generate the mask
    unsigned width = hi - lo + 1;
    unsigned mask = 0xffffffffu >> (32-width);

    return (val & mask);
}

int main(){
    return 0;
}
#include <cstdio>
using namespace std;

unsigned int round_up(unsigned int val){
    //This is not rounding up to the next multiple of 2, but to the next power of 2
    val--; // to handle the edge case when val is already a power of 2
    
    //Now we want all 1's after the first 1 in the value
    val |= val >> 1;
    val |= val >> 2;
    val |= val >> 4;
    val |= val >> 8;
    val |= val >> 16;

    //Finally add 1 to it to convert all the lower 1s to 0
    return val+1;
}

int main(){return 0;}
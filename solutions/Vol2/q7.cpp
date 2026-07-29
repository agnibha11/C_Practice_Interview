#include <cstdio>
using namespace std;

unsigned int count_set(unsigned int value, int hi, int lo){
    //First extract the bits in that range
    //Generate the mask for bit extraction
    unsigned width = (hi - lo + 1);
    unsigned extract = (value >> lo) & (0xffffffffu >> (32-width));

    int count = 0;
    //popcount
    while(extract){
        extract &= (extract - 1);
        count++;
    }

    return count;
}

int main(){
    
    return 0;
}
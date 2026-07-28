#include <cstdio>
using namespace std;

int sample(unsigned word, int k){
    //ensure k is below 4
    k &= 0x00000003;
    //extract the byte k
    unsigned char byte = (word >> (k*8)) && 0x0F; 
    //return the sign extended value
    return (int)((signed char)(byte)); //automatically fills its with sign bit
}

int main(){
    //run and check usage
    return 0;
}
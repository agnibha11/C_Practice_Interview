#include <cstdio>
using namespace std;

//8 bit saturating adder
unsigned char sat_add8(unsigned char a, unsigned char b){
    //find the sum first
    unsigned sum = (unsigned)(a+b); //this is 32 bit, so no overflow in it,

    //if sum is less than 255, then we OR the lowest 8 bits with 1s
    //if sum is more than 255, hence the 8th bit is set, then we set all the lower 8 bits to 1

    //mask generation based on overflow
    int mask = -(sum >> 8); //0 for no overflow, 1 for overflow

    return (unsigned char)(sum | mask);
}

int main(){

}
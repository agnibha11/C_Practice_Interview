#include <cstdio>
using namespace std;

typedef struct {unsigned char reg;} shift8_t; //the shift register

//Calling this is equivalent to a clock edge
int shift_reg(shift8_t *sr, int bit){
    //ensure the bit is a single bit
    bit &= 1;
    sr->reg = (unsigned char)((sr->reg << 1) | (bit));
    //check for pattern 1011
    return ((sr->reg) & 0x0F) == 0x0B;
}

int main(){

    shift8_t shifter;
    shifter.reg = 0x00;

    shift_reg(&shifter, 1);
    shift_reg(&shifter, 0);
    shift_reg(&shifter, 1);
    printf("Sequence detected: %d\n",shift_reg(&shifter,1));
    printf("Sequence detected: %d\n",shift_reg(&shifter,1));
    return 0;
}
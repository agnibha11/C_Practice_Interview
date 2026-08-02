#include <cstdio>
using namespace std;

#define CTRL (*(volatile unsigned int* )(0x40010000))
//volatile ensure that ht evalue can be changed outside the program too, so the 
//compiler won't cache the data

//to ensure that read is disabled, we keep a shadow copy in the software
static unsigned int ctrl_shadow = 0;
//static ensure that this variable is visible only inside this file

void set_bit(int bit){
    //write to that bit
    ctrl_shadow |= (1u << bit);
    CTRL = ctrl_shadow;
}

int main(){
    return 0;
}
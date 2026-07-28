#include <iostream>
using namespace std;

//This is the state
typedef struct {unsigned char q;} counter4_t;
//Since 4 bit counter so 1 byte char used

void counter_clk(counter4_t *c, int clr, int en){
    if(clr)
        c -> q = 0;
    else if(en)
        c -> q = (c -> q + 1) & 0x0000000F; //masked for wrap around
}

int main(){

    counter4_t count;

    //Reset it
    counter_clk(&count, 1, 0);

    //run for 4 counts
    for(int i = 0; i < 4*16; i++){
        counter_clk(&count, 0, 1);
        cout << "Q: " << (int)count.q << endl;
    }
    return 0;
}
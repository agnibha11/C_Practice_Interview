#include <iostream>
using namespace std;

int round_addr(int addr){
    //every multiple of 8 will have bits 4, 5, 6, ... set and all the lowe bits cleared
    //We need to push every bits below bit 4 to above 4 first, which can be done by addig 7 to them
    //adding 7 to any number will push the non aligned values past the next boundary, and we simply mask the lower 3 bits
    return (addr + 7U) & (0xfffffff8);
}

int main(){
    int a = 6;
    int b = 12;
    int c = 17;
    int d = 27;

    cout << "Aligned values: " << round_addr(a)  << " " << round_addr(b) << " " << round_addr(c) << " " << round_addr(d) << endl;
    return 0;
}
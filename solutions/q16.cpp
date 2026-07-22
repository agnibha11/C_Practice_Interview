#include <iostream>
using namespace std;

int main(){
    unsigned a = 0x0000abcd;
    unsigned b = 0x0000a8cd;

    //we can find the different of bits using XORs and then perform a pop count
    unsigned diff = a ^ b;
    //Perform popcount
    unsigned count = 0;
    while(diff){
        diff &= diff - 1;
        count++;
    }

    cout << "Number of bits to be flipped: " << count << endl;
    return 0;
}
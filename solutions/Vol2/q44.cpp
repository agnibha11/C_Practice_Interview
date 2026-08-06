#include <iostream>
using namespace std;

union ctrl_u{
    unsigned int word;
    struct bits{
        unsigned int enable : 1;
        unsigned int mode : 2;
        unsigned int resv1 : 5;
        unsigned int divisor : 8;
        unsigned int resv2 : 16;
    } bits;
};


int main(){

    ctrl_u CTRL {};

    int choice;
    cout << "1. Write single control register (32bits) \n2. Write fields of control register: ";
    cin >> choice;

    if(choice == 1){
        cout << "Enter value to write: ";
        cin >> choice;
        CTRL.word = choice;
    }else{
        cout << "Value for enable: ";
        cin >> choice;
        CTRL.bits.enable = (choice & 1u);

        cout << "Value for mode: ";
        cin >> choice;
        CTRL.bits.mode = (choice & 3u);

        cout << "Value for divisor: ";
        cin >> choice;
        CTRL.bits.divisor = (choice & 0xFFu);
    }

    //Since this is a union, both word and the bits have the same memory location, so we can use words to print bits too
    cout << "Register: " << CTRL.word << endl;
    

    return 0;
}
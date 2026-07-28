#include <iostream>
using namespace std;

int ext12(int x){
    //Sign extend a 12 bit number
    //For safety, ensuring only 12 bits are present
    x &= 0x00000fff;
    //check the signbit if negative
    //Note in C, any non zero value is true logically
    if(x & 0x00000800){
        //negative number
        x |= (0xfffff000);
    }
    return x;
}

int main(){

    int a = 0x00000C78;
    int b = 0x00000478;

    cout << "Sign extend for " << a << " is: " << ext12(a) << endl;
    cout << "Sign extend for " << b << " is: " << ext12(b) << endl;
    
    return 0;
}


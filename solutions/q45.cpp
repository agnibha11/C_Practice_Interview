#include <iostream>
using namespace std;

int is_onehot(int x){
    return ((x & (x-1)) == 0) && (x != 0);
}

int main(){
    int a = 0x00001000;
    int b = 0xf0000000;

    cout << "One hot a: " << is_onehot(a) << endl;
    cout << "One hot b: " << is_onehot(b) << endl;
}
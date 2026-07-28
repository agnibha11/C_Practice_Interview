#include <cstdio>
using namespace std;

//rotate-right by n bits
unsigned int rot_right(unsigned int val, int n){
    return (val >> n) | (val << (32-n));
}

//rotate-left by n bits
unsigned int rot_left(unsigned int val, int n){
    return (val << n) | (val >> (32-n));
}

int main(){
    return 0;
}
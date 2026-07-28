#include <cstdio>
using namespace std;

unsigned bin2gray(unsigned b){
    return b ^ (b >> 1);
}

unsigned gray2bin(unsigned gray){
    //The algorithm is,
    //Bi = Gi XOR Gi+1 XOR Gi+2 XOR .... Gmsb
    unsigned b = 0;
    while(gray){
        b ^= gray;
        gray >> 1;
    }
}


int main(){
    return 0;
}
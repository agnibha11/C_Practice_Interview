#include <cstdio>
using namespace std;

unsigned mul8 (unsigned char a, unsigned char b){
    unsigned int result = 0;
    while (b){
        if(b & 1){
            result += a;
        }

        a <<= 1;
        b >>= 1;
    }
    return result;
}


int main(){

    unsigned char a = 4, b = 3;

    printf("Multiply: %d\n", mul8(a,b));

    return 0;
}
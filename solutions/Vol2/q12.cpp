/*
Little endian: 08 07 06 05 04 03 02 01
Big endian: 01 02 03 04 05 06 07 08
*/

#include <cstdio>
using namespace std;

int main(){
    __uint64_t v = 0x0102030405060708;
    //We have to make the pointer byte addressable
    char *p = (char *)(&v);

    for(int i = 0; i < 8; i++){
        printf("%02X ", p[i]);
    }
}
#include <cstdio>
using namespace std;

//position of most significant set bit
int position(int val){
    //smear the bits below the msb
    val |= val >> 1;
    val |= val >> 2;
    val |= val >> 4;
    val |= val >> 8;
    val |= val >> 16;

    //Now perform a pop count
    int count = 0;
    while(val){
        val &= val-1;
        count++;
    }

    return count - 1;
}

int main(){
    int a = 0x10000000;
    printf("MS set bit at position: %d\n", position(a));
    return 0;
}
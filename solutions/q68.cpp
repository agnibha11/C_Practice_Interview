#include <cstdio>
using namespace std;

unsigned int swap(unsigned int val){
    return ((val >> 1) & 0x55555555u) | ((val << 1) & 0xAAAAAAAAu);
}


int main(){
    

    return 0;
}
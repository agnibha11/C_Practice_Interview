#include <cstdio>
using namespace std;

//count trailing zeros
int count_zero(int val){
    //we continuously bitshift until we find the lowest 1
    int count = 0;
    while(!(val & 1u)){
        val >>= 1;
        count++;
    }
    return count;
}

int main(){
    int a = 0xffff0000;
    printf("Trailing zeros: %d\n", count_zero(a));
    return 0;
}
#include <cstdio>
using namespace std;

int a[5] = {1, 2, 1, 2, 4};

int singleNumber(int *array, int len){
    //xor every element
    //Since a ^ 0 = a and then a ^ a = 0
    int x = 0;
    for(int i = 0; i < len; i ++){
        x ^= array[i];
    }
    return x;
}

int main(){
    //calculate the length
    int len = sizeof(a)/sizeof(*a);
    printf("Single number: %d\n", singleNumber(a,len));
    return 0;
}

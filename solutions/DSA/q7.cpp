#include <cstdio>
using namespace std;

int a[] = {0,2,3,4};

//missing number
int missing(int *array, int len){
    //we can XOR the index with the element
    int x = len;
    for(int i = 0; i < len; i++){
        x ^= i;
        x ^= array[i];
    }

    return x;
}

int main(){
    int len = sizeof(a)/sizeof(*a);
    printf("Missing number: %d\n", missing(a,len));
    return 0;
}
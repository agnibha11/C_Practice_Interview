#include <cstdio>
using namespace std;

int abs(int val){
    //check if negative or not
    int mask = val >> 31;; //sign bit

    //if negative, we have to make 2's complement of it again, meaning invert the bits and then add 1 to it
    return (val ^ mask) + (mask & 0x00000001); 
}

int min(int a, int b){
    //compute is a > b
    int mask = (a - b) >> 31; 
    return b + ((a - b) & mask);
}

int max(int a, int b){
    //compute a > b
    int mask =  (a - b) >> 31;
    return a + ((b - a) & mask);
}

int main(){

    int a = -12, b = 32;

    printf("%d: abs: %d\n",a, abs(a));
    printf("%d: abs: %d\n",b, abs(b));
    printf("minimum: %d\n", min(a,b));
    printf("maximum: %d\n", max(a,b));

    return 0;
}
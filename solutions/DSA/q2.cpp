#include <cstdio>
using namespace std;

bool isPowerof2(int val){
    // a power of 2 will have exactly 1 bit set.
    return (val != 0 && ((val & (val-1)) == 0));
}

int main(){

    int a = 1024;
    int b = 1023;
    printf("Power of 2 for %0X, %0X: %d, %d\n", a, b, isPowerof2(a), isPowerof2(b));

}
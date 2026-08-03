#include <cstdio>
using namespace std;

int main(){
    //swap without temporary variable
    int a = 234;
    int b = 445;
    //logic: a = a ^ b
    //b = b ^ a = a ^ b ^ b = 0 ^ a = a
    //a = a ^ a = a ^ a ^ b = b

    printf("Before swap: %d %d\n",a, b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("After swap: %d %d\n",a, b);

    return 0;
}
#include <cstdio>
using namespace std;

int add(int a, int b){
    while(b){
        unsigned int carry = (a & b) << 1;
        a ^= b;
        b = (int)carry;
    }
    return a;
}
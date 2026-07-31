#include <cstdio>
using namespace std;

int mul7(int a){
    //multiply by 7 means a * 2 ^3 - a
    return (a << 3) - a;
}

int mul15(int a){
    //multiply by 15 means a * 2^4 - a
    return (a << 4) - a;
}

int mul9(int a){
    //multiply by 9 means a * 2^3 + a
    return (a << 3) + a;
}

int main(){
    return 0;
}
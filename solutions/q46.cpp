#include <cstdio>
using namespace std;

int log2(int val){
    //power of 2 unsigned int, so only 1 bit will be set.
    //We can compute the number of left shifts needed to make it 0, hence the log value
    int pow = 0;
    while(val >>= 1) pow++;
    return pow;
}

int main(){
    int a = 2048;
    int b = 1024;

    std::printf("Log(%d) = %d\n",a, log2(a));
    std::printf("Log(%d) = %d\n",b, log2(b));
    return 0;
}
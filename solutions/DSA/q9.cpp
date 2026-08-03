#include <cstdio>
using namespace std;

int main(){
    int a = 0x00081000;

    //extract the lowest set bit
    //we can invert the bits a and and then add 1 to it, that will put a 1 in the lowest set bit and the bits below it
    //will all be 0, then we can and it with itself, now only the bit that will pass is the lowest set bit

    int lowestSet = a & ((~a)+1);
    
    //clear the lowest set bit
    int clearSet = a & (a-1);

    printf("Lowest set bit: %0x\n", lowestSet);
    printf("Lowest cleared num: %0x\n",clearSet);
    return 0;
}
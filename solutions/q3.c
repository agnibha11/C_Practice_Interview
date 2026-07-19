#include <stdio.h>

int count_loop(unsigned int x);
int count_kernighan(unsigned int x);

int main() {
    unsigned int a = 1044;
    printf("%u, popcount: %d\n",a,count_loop(a));
    printf("%u, popcount: %d",a,count_kernighan(a));
    return 0;
}


//Traditional
int count_loop(unsigned int x){
    int count = 0;
    while(x){
        count += (x & 1U); //Add based on LSB
        x >>= 1; //Right shift and introduce 0's to the left
    }
    return count;
}

//Kernighan Trick
//by anding x with x-1
//x-1 will always have all 1s after the first 1 in the number, and anding it will make, the 
//first 1 along with all the bits after it 0. So the loop will run only as many times as there are 1's in the number
int count_kernighan(unsigned int x){
    int count = 0;
    while(x){
        x &= x-1;
        count++;
    }
    return count;
}
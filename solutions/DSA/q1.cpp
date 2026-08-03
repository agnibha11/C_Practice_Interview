#include <cstdio>
using namespace std;

int count(int val){
    //this is a pop count, so most effective method is Brian Kernighan's method
    int count = 0;
    while(val){
        val &= (val-1);
        count++;
    }

    return count;
}

int main(){

    int a = 0xFF100000;
    printf("Count of 1s: %d\n",count(a));

}
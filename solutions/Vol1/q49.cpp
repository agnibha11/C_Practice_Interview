#include <cstdio>
using namespace std;

void rev_bytes(unsigned char *buf, int length){
    int i = 0, j = length - 1;
    while(i < j){
        unsigned char t = buf[i];
        buf[i] = buf[j];
        buf[j] = t;
        i++; j--; 
    }
}

int main(){

}
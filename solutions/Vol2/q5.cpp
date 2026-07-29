#include <cstdio>
using namespace std;

unsigned int set_clear(unsigned int val, int flag, int n){
    //flag = 1 means set bit n
    //flag = 0 means clear bit n

    //first generate the mask
    unsigned mask = 1u << n;

    return ( val & (~mask)) | ((!!flag) << n);
}


int main(){
    return 0;
}
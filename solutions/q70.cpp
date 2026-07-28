#include <cstdio>
using namespace std;

//LEading 0s
int CLZ(int n){
    //leading 0s
    int count = 0;
        //check the first 16 bits, if they are all 0
    if(!(n & 0xffff0000)){ count += 16; n << 16;}
    if(!(n & 0xff000000)){count += 8; n << 8;}
    if(!(n & 0xf0000000)){count += 4; n << 4;}
    if(!(n & 0xc0000000)){count += 2; n << 2;}
    if(!(n & 0x80000000)){count += 1;}

    return count;

}

//Trailing 1s
int CTZ(int n){
    int count = 0;
    if(!(n & 0x0000ffff)){count += 16; n >> 16;}
    if(!(n & 0x000000ff)){count += 8; n >> 8;}
    if(!(n & 0x0000000f)){count += 4; n >> 4;}
    if(!(n & 0x00000003)){count += 2; n >> 2;}
    if(!(n & 0x00000001)){count += 1;}
}


int main(){

    
    int n = 0x1bcdef12;


    //Counting trailing

    return 0;
}
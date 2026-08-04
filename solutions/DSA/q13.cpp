#include <cstdio>
using namespace std;

//bin 2 gray
unsigned int bin2gray(unsigned int bin){
    return (bin >> 1) ^ bin;
}

//gray to bin
unsigned int gray2bin(unsigned int gray){
    unsigned int bin = gray;
    bin ^= bin >> 16;
    bin ^= bin >> 8;
    bin ^= bin >> 4;
    bin ^= bin >> 2;
    bin ^= bin >> 1;

    return bin;
}
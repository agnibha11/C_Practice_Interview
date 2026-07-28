#include <cstdio>
using namespace std;

int main(){
    //To check endianess of the system
    int a = 1;
    //To check endianess, we can chec is 1 is stored at the MSB or LSB,
    //we need a character pointer to check 1 byte
    char *lsb = (char *)&a; //pointer always points to the lsb
    if(*lsb == 1) printf("Little Endian System\n");
    else printf("Big endiand system");
}
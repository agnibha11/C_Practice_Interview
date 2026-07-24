#include <cstdio>
using namespace std;

//union, unlike struct has only 1 active memory shared among all members
//So the size of the union is the size of the largest member


int main(void){
    union { float f; unsigned char b[4]; unsigned int u; } pun;
    pun.f = 1.0f;
    printf("0x%08X\n", pun.u);                     /* 0x3F800000 */
    for (int i = 0; i < 4; i++) printf("%02X ", pun.b[i]);
    /* little-endian prints: 00 00 80 3F */
    return 0;

}
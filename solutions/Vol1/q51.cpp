#include <cstdio>
using namespace std;

//using a struct for this purpose
typedef struct {
    volatile unsigned int CTR; //4 bytes so at 0x00
    volatile unsigned int STATUS; // starts at 0x04
    volatile unsigned int DATA; // starts at 0x08
    unsigned int RESERVED0; //starts at 0x0C
    volatile unsigned int IRQ_EN; //starts at 0x10
} periph_t;

//The base address of the peripheral
#define PERIPH ((periph_t *)0x40020000)

int main() {
    //Enabling bit 0 of IRQ_EN
    PERIPH->IRQ_EN |= 1u;
    return 0;
}
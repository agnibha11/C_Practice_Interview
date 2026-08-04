#include <cstdio>
using namespace std;

typedef struct {
    volatile unsigned int CTRL;
    volatile unsigned int STATUS;
    volatile unsigned int DATA;
} uart_t;

#define UART(n) ((uart_t *)(0x40011000u + (n) * 0x1000))

void uart_putc(uart_t *u, char ch){
    while((u->STATUS //& //TX_READY
        ) == 0);
    u->DATA = (unsigned int)ch;
}


int main(){
    //Usage
    uart_putc(UART(0), 'A');
    uart_putc(UART(2), 'B');
    return 0;
}


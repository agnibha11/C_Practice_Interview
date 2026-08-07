#include <iostream>
using namespace std;

typedef struct {
    volatile uint32_t CTRL;
    volatile uint32_t ADDR;
    volatile uint32_t LEN;
    volatile uint32_t STATUS;
} chan_t;                                   /* 16 bytes per channel */
typedef struct {
    volatile uint32_t GLOBAL_CTRL;
    volatile uint32_t RESERVED[3];          /* keep offsets exact */
    chan_t            chan[8];              /* array of channels  */
} dma_t;
#define DMA ((dma_t *)0x40026000u)
void dma_setup(int n, uint32_t src, uint32_t len)
{
    DMA->chan[n].ADDR = src;
    DMA->chan[n].LEN  = len;
    DMA->chan[n].CTRL = 1u;                 /* start last! */
}
#include <cstdio>
using namespace std;

#define STATUS (*((volatile unsigned int *)0x40010004u))
#define TIMEOUT 100000u

int wait_ready(){
    for (unsigned i = 0; i < TIMEOUT; i++){
        if((STATUS & 0x1u) == 0x1u)
            return 1;
    }
    return 0;
}
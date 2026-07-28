#include <cstdio>
using namespace std;

typedef struct {
        unsigned char READY : 1;
        unsigned char ERROR : 1;
        unsigned char MODE : 2;
        unsigned char COUNT : 4;
    } status_t;

int main(){
    //usage
    status_t stat;
    stat.MODE = 3;
    
}
#include <cstdio>
using namespace std;

unsigned int insert(unsigned int n, unsigned m, int i, in j){
    n = clearRange(n, i, j);
    return n | (m << i);
}
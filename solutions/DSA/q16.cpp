#include <cstdio>
using namespace std;

//range bitwise AND
int bitwiseRangeAnd(int m, int n){
    int result = m;
    while(m >= n){
        result &= m;
        m--;
    }

    return result;
}

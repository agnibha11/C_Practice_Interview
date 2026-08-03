#include <cstdio>
using namespace std;

//find the element that does not appear 3 times
int singleNumber(const vector<int>& a) {
    int ones = 0, twos = 0;
    for (int v : a) {
        ones = (ones ^ v) & ~twos;
        twos = (twos ^ v) & ~ones;
    }
    return ones;
}
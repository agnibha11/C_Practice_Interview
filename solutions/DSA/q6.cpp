#include <cstdio>
using namespace std;

vector<int> singleNumberIII(const vector<int>& a) {
    long long x = 0;
    for (int v : a) x ^= v;
    int bit = x & (-x);              // lowest differing bit
    int p = 0, q = 0;
    for (int v : a) (v & bit) ? p ^= v : q ^= v;
    return {p, q};
}

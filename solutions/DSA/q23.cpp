#include <cstdio>
using namespace std;

int totalHammingDistance(const vector<int>& a) {
    int n = a.size(), total = 0;
    for (int b = 0; b < 32; b++) {
        int ones = 0;
        for (int v : a) ones += (v >> b) & 1;
        total += ones * (n - ones);
    }
    return total;
}
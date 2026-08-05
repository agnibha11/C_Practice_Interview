#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(const vector<int>& p) {
    int lo = INT_MAX, best = 0;
    for (int x : p) { lo = min(lo, x); best = max(best, x - lo); }
    return best;
}

int main(){

    return 0;
}
#include <cstdio>
using namespace std;

//generate n bit gray code sequence
vector<int> grayCode(int n) {
    vector<int> out;
    out.reserve(1 << n);
    for (int i = 0; i < (1 << n); i++) out.push_back(i ^ (i >> 1));
    return out;
}
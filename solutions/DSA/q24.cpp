vector<vector<int>> subsets(const vector<int>& a) {
    int n = a.size();
    vector<vector<int>> out;
    for (int mask = 0; mask < (1 << n); mask++) {
        vector<int> cur;
        for (int j = 0; j < n; j++)
            if (mask & (1 << j)) cur.push_back(a[j]);
        out.push_back(cur);
    }
    return out;
}

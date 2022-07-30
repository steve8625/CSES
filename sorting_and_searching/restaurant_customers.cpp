#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

#define PV(v) for(auto vv : v) { cout << vv << " "; } cout << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        vector<pair<int, int>> events;
        int n, max_ppl = 0, in, out, cur = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> in >> out;
            events.push_back({in, 1});
            events.push_back({out, -1});
        }
        sort(events.begin(), events.end(), [](auto evt1, auto evt2){ return evt1.first < evt2.first; });
        for (auto evt : events) {
            cur += evt.second;
            max_ppl = max(max_ppl, cur);
        }
        cout << max_ppl << endl;
    }
}
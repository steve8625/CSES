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
        int n, m, h, c;
        cin >> n >> m;
        multiset<int> tickets;
        for (int i = 0; i < n; i++) { 
            cin >> h; tickets.insert(h);
        }

        for (int i = 0; i < m; i++) {
            cin >> c;
            auto it = tickets.upper_bound(c);
            if (it == tickets.begin()) {
                cout << -1 << endl;
            } else {
                cout << *(--it) << endl;
                tickets.erase(it);
            }
        }
        
    }
}
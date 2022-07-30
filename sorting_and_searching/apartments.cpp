#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

// 45, 60, 60, 80
// 30. 60. 75

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n, m, k, ans = 0;
        cin >> n >> m >> k;
        vector<int> requests(n), rooms(m);
        for (int i = 0; i < n; i++) cin >> requests[i];
        for (int i = 0; i < m; i++) cin >> rooms[i];

        sort(requests.begin(), requests.end());
        sort(rooms.begin(), rooms.end());

        int counter = 0;
        for (auto req : requests) {
            while (counter < m && req > rooms[counter] + k) counter++;
            if (counter >= m) break;
            if (req <= rooms[counter] + k && req >= rooms[counter]-k) {
                ans++;
                counter++;
            }
        }

        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n, x, ans = 0;
        cin >> n >> x;
        vector<int> kids(n);
        for (int i = 0; i < n; i++) cin >> kids[i];
        sort(kids.begin(), kids.end());

        int left = 0, right = kids.size()-1;
        while (left <= right) {
            if (kids[left] + kids[right] <= x) {
                ans++;
                left++;
                right--;
            } else {
                ans ++;
                right--;
            }
        }

        cout << ans << endl;
    }
}
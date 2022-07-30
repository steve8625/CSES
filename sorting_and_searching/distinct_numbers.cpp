#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1;
    for (int t = 1; t <= tc; t++) {
        int tt = 1;
        int value = 0;
        cin >> tt;
        set<int> se;
        for (int i = 1; i <= tt; i++) {
            cin >> value;
            se.insert(value);
        }
        cout << se.size() << endl;
    }
}
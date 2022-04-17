#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (char c : s) {
            if (c == '0') zero++;
            else one++;
        }
        if (one == 0 or zero == 0) {
            cout << 0 << '\n';
        } else {
            cout << min(x, y) << '\n';
        }
    }
}
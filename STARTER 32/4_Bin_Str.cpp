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
        int sum = 0;
        int isX = false;
        if (x > y) {
            isX = true;
            sort(s.begin(), s.end());
        } else {
            sort(s.rbegin(), s.rend());
        }
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                if (isX) {
                    sum += y;
                } else {
                    sum += x;
                }
            }
        }
        cout << sum << '\n';
    }
}
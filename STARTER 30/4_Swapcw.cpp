#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string res = s;

    int counter = 0;

    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (res[i] != s[i])
        {
            char ch = res[i];
            res[i] = res[n - 1 - i];
            res[n - 1 - i] = ch;
        }
    }

    if (s == res)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        lucifer();
    }
}
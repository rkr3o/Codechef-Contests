#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    string s;
    cin >> s;
    string t;
    cin >> t;

    string res = " ";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            res = res + 'B';
        }
        else
            res = res + 'G';
    }

    cout << res << endl;
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
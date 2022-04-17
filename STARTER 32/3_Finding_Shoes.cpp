#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int n, m;
    cin >> n >> m;

    int val = 0;
    if (m >= n)
    {
        val = n;
    }
    else if (m < n)
    {
        val = 2 * n - m;
    }

    cout << val << endl;
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
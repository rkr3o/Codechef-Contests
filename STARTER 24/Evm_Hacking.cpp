#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int d, e, f, l, m, n;
    cin >> d >> e >> f >> l >> m >> n;

    int evm = (l + m + n) / 2;

    if ((d + e + n) > evm || (d + m + f) > evm || (l + e + f) > evm)
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
#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    double x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;

    double res1 = y1 / x1;
    double res2 = y2 / x2;

    if (res1 < res2)
    {
        cout << -1 << endl;
    }
    else if (res1 == res2)
    {
        cout << 0 << endl;
    }
    else
        cout << 1 << endl;
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
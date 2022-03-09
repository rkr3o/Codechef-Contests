#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int a, b;
    cin >> a >> b;

    // chef win a+b+bc=21

    int sum = a + b; // 11

    int res = 21 - sum; // 10

    if (res <= 10)
    {
        cout << res << endl;
    }
    else
        cout << -1 << endl;
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
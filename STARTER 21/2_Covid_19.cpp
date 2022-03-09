#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void byte()

{
    int n, m;
    cin >> n >> m;

    int val1 = (n / 2 + 1) * (m / 2 + 1);
    int val2 = (n / 2) * (m / 2 + 1);
    int val3 = (n / 2 + 1) * (m / 2);
    int val4 = (n / 2) * (m / 2);

    if (n % 2 != 0 && m % 2 != 0)
    {
        cout << val1 << endl;
    }
    else if (n % 2 == 0 && m % 2 != 0)
    {
        cout << val2 << endl;
    }
    else if (n % 2 != 0 && m % 2 == 0)
    {
        cout << val3 << endl;
    }

    else
    {
        cout << val4 << endl;
    }
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
        byte();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    long long int n;
    cin >> n;

    double res = pow(0.143 * n, n);
    if ((res - floor(res)) < 0.5)
    {
        cout << floor(res) << endl;
    }
    else
        cout << floor(res) + 1 << endl;

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
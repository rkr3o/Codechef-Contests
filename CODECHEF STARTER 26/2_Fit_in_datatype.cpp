#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int n, k;
    cin >> n >> k;

    int counter = -1;
    for (int i = 0; i <= k; i++)
    {
        counter++;
        if (counter == n + 1)
        {
            counter = 0;
        }
    }
    cout << counter << endl;
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
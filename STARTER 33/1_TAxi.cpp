#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{

    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "ANY" << endl;
    }
    else if (a > b)
    {
        cout << "SECOND" << endl;
    }
    else
        cout << "FIRST" << endl;
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
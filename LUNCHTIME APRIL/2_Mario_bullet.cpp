#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int x, y, z;
    cin >> x >> y >> z;

    if((y/x)<=z)
    {
        cout<<z-(y/x)<<endl;
    }
    else cout<<0<<endl;

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
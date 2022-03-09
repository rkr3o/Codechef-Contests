#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
     
     int val1 = a*b ;
     int val2 = x*y;
    if(val1<=val2)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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
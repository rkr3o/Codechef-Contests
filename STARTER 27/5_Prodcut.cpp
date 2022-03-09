#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER
int gcd(int a,int b)
{
    if(b==0)
    return a;
    return gcd(b,a%b);
}
void lucifer()

{
    long long int b, c;
    cin >> b >> c;

    int a = gcd(b,c);
    cout<<c/a<<endl;
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
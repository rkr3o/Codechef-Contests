#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int n;
    cin >> n;

    string s;
    cin>>s;

    int counter2 = 0;
    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            counter++;
        }
        else
            counter2++;
    }

    int h = max(counter, counter2);
    int l = min(counter, counter2);

    if (h>l)
    {
        cout<<2*l+1<<endl;
    }
    else cout<<2*l<<endl;
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
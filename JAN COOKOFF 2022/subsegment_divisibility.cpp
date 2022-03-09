#include <bits/stdc++.h>
using namespace std;

//Enter your code here

signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int j = 2;
        int k = 3;
        for (int i = 0; i < n; i++)
        {
            cout << j << " ";
            if (i & 1)
            {
                j += 3;
            }
            else
            {
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}
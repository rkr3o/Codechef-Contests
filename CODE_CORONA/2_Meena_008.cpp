#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void byte()

{
    int n;
    cin >> n;
    int arr[n];
    int counter_1 = 0;
    int counter_2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            counter_1++;
        }
        if (arr[i] == 2)
        {
            counter_2++;
        }
    }


if (counter_1 == counter_2)
    {
        cout << "NOTA" << endl;
    }
   else if (counter_1 > counter_2)
    {
        cout << 1 << endl;
    }
    else 
    {
        cout << 2 << endl;
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
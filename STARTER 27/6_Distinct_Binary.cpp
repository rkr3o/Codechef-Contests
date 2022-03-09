#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int n;
    cin >> n;
    cin.clear();
    string str;
    cin >> str;

    int counter = 0;

    for (int i = 0; i < n; i++)
    {

        if (str[i - 1] != str[i])
        {
            counter++;
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
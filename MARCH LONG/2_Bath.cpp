#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int total = (y * 2);

        if (total > x)
        {
            cout << 0 << endl;
        }
        else
            cout << (x / (y * 2)) << endl;
    }
}
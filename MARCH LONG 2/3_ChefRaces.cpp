#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;

      
         if ((x != a and x != b and y != a and y != b))
        {
            cout << 2 << endl;
        }
       else   if ((x == b and y == a) || (x == a and y == b))
        {
            cout << 0 << endl;
        }
        else
            cout << 1 << endl;
    }
}
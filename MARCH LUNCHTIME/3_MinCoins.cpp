#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int total = x % 10;
        int res = x / 10;
        if (total == 0)
        {
            cout << res << endl;
        }
        else if (total != 0 and total % 5 == 0)
        {
            cout << res + total / 5 << endl;
        }
        else
            cout << -1 << endl;
    }
}
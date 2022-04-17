#include <bits/stdc++.h>
using namespace std;
int result(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return (num % 10) + result(num / 10);
}

int main()
{
    int t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int total = result(n);

        if (result(n) % 2 == 0)
        {
            while (result(n) % 2 == 0)
            {
                n++;
            }
            cout << n << endl;
        }
        else
        {
            while (result(n) % 2 != 0)
            {
                n++;
            }
            cout << n << endl;
        }
    }

    return 0;
}
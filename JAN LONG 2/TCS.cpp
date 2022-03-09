#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void byte()

{
    int a, b, c; // a = dsa;b = toc;c=dm;
    cin >> a >> b >> c;

    int dragon;
    dragon = a + b + c;

    int p, q, r;
    cin >> p >> q >> r;

    int sloth;
    sloth = p + q + r;

    if (dragon > sloth)
    {

        cout << "DRAGON" << endl;
    }

    else if (sloth > dragon)
        cout << "SLOTH" << endl;

    else
    {
        if (p > a)
        {

            cout << "SLOTH" << endl;
            exit(0);
        }
        else if (a > p)
            cout << "DRAGON" << endl;

        else
        {
            if (b > q)
            {
                cout << "DRAGON" << endl;
            }
            else if (q > p)
                cout << "SLOTH " << endl;

            else
                cout << "TIE" << endl;
            exit(0);
        }
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
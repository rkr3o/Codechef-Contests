#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void byte()

{
    double t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;

    // you can store the value of square and cube
    /*
         double val1 = (t1*t1)/(r1*r1*r1);
         double  val2 = (t2*t2)/(r2*r2*r2);

         */

    double var1 = pow(t1, 2) / pow(r1, 3);
    double var2 = pow(t2, 2) / pow(r2, 3);

    if (var1 == var2)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
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
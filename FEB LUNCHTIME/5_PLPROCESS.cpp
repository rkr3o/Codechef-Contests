#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{

    long long n;
    cin >> n;
    vector<long long> v(n);
    long long total = 0;
    for (auto &x : v)
    {
        cin >> x;
        total += x;
    }
    long long Average = total / 2;
    long long mehul = 0;
    long long avgsum2 = 0;
    for (int i = 0; i < n; i++)
    {
        mehul += v[i];
        if (mehul > Average)
        {
            avgsum2 = mehul - v[i];
            break;
        }
    }
    cout << min(max(total - avgsum2, avgsum2), max(total - mehul, mehul)) << endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
    {
        lucifer();
    }
}
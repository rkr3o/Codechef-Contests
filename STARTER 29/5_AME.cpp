#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll num, res = 0;
        cin >> num;
        vector<long long> array(num), val1, val2;
        for (auto &X : array)
            cin >> X;
        for (int i = 0; i < num; i++)
        {
            if (i & 1)
                val1.push_back(abs(array[i]));
            else
                val2.push_back(abs(array[i]));
        }
        sort(val1.begin(), val1.end());
        sort(val2.begin(), val2.end());

        if (val1[val1.size() - 1] > val2[0])
        {
            swap(val1[val1.size() - 1], val2[0]);
        }
            
        for (auto x : val2)
            res += x;
        for (auto x : val1)
            res -= x;
        cout << res << endl;
    }
}
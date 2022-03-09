#include <bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

// Author : RVI : THE DARK ASTER

void lucifer()

{
    int size, w;
    cin >> size >> w;
    // n = size of array
    // w = money earn on those days
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int i = 0;
    sort(arr, arr + size);
    for (i = size - 1; i >= 0; i--)
    {
        sum += arr[i];
        if (w <= sum)
        {
            break;
        }
    }
    cout << i << endl;
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
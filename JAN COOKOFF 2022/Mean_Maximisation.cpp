#include<bits/stdc++.h>
using namespace std;


#define all(cont) cont.begin(), cont.end()
#define ll long long
void solve()
{
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.rbegin(),arr.rend());
        int a = *arr.begin();
    
        int sm = accumulate(all(arr),0LL);
        double ans = double(sm-a)/(n-1);
        ans+=a;
        cout << setprecision(12) << fixed;
        cout << ans << '\n';

}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        }
    return 0;
}
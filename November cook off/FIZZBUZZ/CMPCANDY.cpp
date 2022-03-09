#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)
void byte()

{
           int n, k;
        cin >> n >> k;
        int ans = 0;

        if (n % k == 0)
        {
            ans = n / k;
            cout << ans << endl ;
        }
        else
        {
            cout << "-1" << endl;
        }
    
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;
cin>>t;
while(t--){
byte();
}
}
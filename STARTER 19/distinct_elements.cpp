#include<bits/stdc++.h>
#define int64_t
using namespace std;
#define span(a) begin(a), end(a)

void distinct(){
    int n;
    cin>>n;

    int arr[n];
    for(auto &i:arr) cin>>i;

    map<int, int> f;
    
    long long int res = 1;
    int mod = 1e9+7;
    
    for(int i:arr) f[i]++;
    
    for(auto pii:f){
        int a = pii.second;
        res*=(a+1);
        res%=mod;
    }
    
    res--;
    
    cout<<res<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        distinct();
    }
}
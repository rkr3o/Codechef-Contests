#include<bits/stdc++.h>
#define int32_t
using namespace std;
#define span(a) begin(a), end(a)

void move(){
    int a;
    cin>>a;
        
    int n = a%2;

    cout<<(a-n)<<endl;
}

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        move();
    }
}
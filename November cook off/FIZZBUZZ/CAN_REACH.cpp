#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)
void byte()

{    int x;
    cin>>x;

    int y;
    cin>>y;

    int k;
    cin>>k;

    if(x%k==0 && y%k==0){
        cout<<"YES"<<endl;
    }

    else{
        cout<<"NO"<<endl;
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
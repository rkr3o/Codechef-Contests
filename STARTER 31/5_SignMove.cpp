#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
    int n;
    cin>>n;

    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else cout<<-(n/2+1)<<endl;

}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;
cin>>t;
while(t--){
lucifer();
}
}
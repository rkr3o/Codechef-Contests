#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        int n, m , k ;
        cin >> n >> m >> k;

        int val = abs(m-k);

        if(n>val)
        {
            cout<<"No"<<endl;
        }
        else cout<<"Yes"<<endl;

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
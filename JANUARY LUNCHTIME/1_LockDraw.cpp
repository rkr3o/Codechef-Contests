#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int a, b , c ;
        cin >> a >> b >> c ;
        
        if (a == (b+c) || b == (a+c) || c == (a+b))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;

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
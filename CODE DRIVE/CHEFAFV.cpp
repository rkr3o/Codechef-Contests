#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
       long long n, answer=0;
        cin>>n;
        if(n==3) cout<<"10"<<"\n";
        else if(n>3){
            answer=pow(3,(n-3))*8*(n-2);
            answer=answer+answer/4;
            cout<<answer<<"\n";
        }
        else cout<<0<<"\n";

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
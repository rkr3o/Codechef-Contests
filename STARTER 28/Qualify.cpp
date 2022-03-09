#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        int x ,a ,b; 
        cin>>x>>a>>b;

        int one = a*1;
        int two = b*2;
        int total = one+two;
        if(total>=x)
        {
            cout<<"Qualify"<<endl;
        }
        else cout<<"NotQualify"<<endl;
        
        
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
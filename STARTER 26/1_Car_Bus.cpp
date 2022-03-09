#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        int x , y ;
        cin >>x >> y;
   if(x==y)cout<<"SAME"<<endl;
       else  if(x>y)
        {
            cout<<"CAR"<<endl;
        }
        else cout<<"BIKE"<<endl;
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
#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int x , y , z ;
        cin>> x >> y >> z ;
        // x : amount
        // y : pizza price
        // z : burger price
       
      if(x == y || x > y )
      {
          cout<<"PIZZA"<<endl;
      }
      else if(x == z || x > z)     {
          cout<<"BURGER"<<endl;
      }
       else
       cout<<"NOTHING"<<endl;
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
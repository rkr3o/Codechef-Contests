#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
      int n;
      cin >> n ;

      int val = n%4 ;
      int res = n/4;
    
      if(val==0)
      {
          cout<<res<<endl;
      }
      else if(n<=4)
      {
          cout<<1<<endl;
      }

      else cout<<res+1<<endl;
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
#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
         int n ;
         cin>>n;
      
        int count = 0 ;
        while (n%2==0)
        {
            count ++ ;
            n/=2;
        }
        cout<<count<<endl;
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
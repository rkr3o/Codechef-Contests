#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
       int val1 ;
       cin >> val1 ;
       
       int d ,c ,f;
       int y =0 , counter=0;

       while(y<val1)
       {
           y+=(pow(2,counter));
           counter++;
       }
       counter++;
       y=val1+(pow(2,counter));
       cout<<val1<<" "<<0<<" "<<y<<endl;
       

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
#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        int n ;
        cin>>n;
       
       string s ;
       cin>>s;

       for (int i = 0; i < s.length(); i++)
       {
           if(s[i]=='0' || s[i]=='5')
           {
               cout<<"Yes"<<endl;
               return ;
           }
       }
        cout<<"No"<<endl;
     
       


       
        
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
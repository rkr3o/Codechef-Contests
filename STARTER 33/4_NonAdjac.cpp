#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        int n;  
        cin >> n ;

        string s; 
        cin >> s ;
        int count1=0;
        int count0=0;

        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='1')
            {
                //cout<<'1'<<endl;
                count1++;
            }
            
            if(s[i]=='1' and s[i+1]=='1')
            {
                cout<<2<<endl;
                return;
            }
   
        }
      
      if(s[n-1]=='1')  count1++; 
      if(count1 == 0)   cout<<0<<endl; 
      else cout<<1<<endl;
        


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
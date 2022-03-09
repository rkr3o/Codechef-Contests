#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int n ;
        cin>>n;

        string str ;
        cin>>str;

        int counter1 = 0 ;
        int counter2= 0 ;

        for (int  i = 0; i < n; i++)
        {
             if(str[i] == '0')
             {
                 counter1++ ;
             }
             if(str[i]=='1')
             {
                 counter2++ ;
             }
        }
        
        int minimum_num = INT_MAX;
        minimum_num = min(counter1 ,counter2);
        
        
           if(minimum_num >1)
           {
               cout<<minimum_num-1<<endl;
           }
           else
           cout<<"0"<<endl;
        
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
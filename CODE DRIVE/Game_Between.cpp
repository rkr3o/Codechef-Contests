#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int a , b , c , d;
        cin>> a >> b >> c >> d ;
        
        
         
        if(a>=b)
        {
          b=b+c;  
        }
        else
        {
          a=a+c;
        }

        if(a>=b)
        {
            b=b+d;
        }
        else
        {
            a=a+d;
        }

        if(a>=b)
        {
            cout<<"N"<<endl;
        }
        else 
        {
            cout<<"S"<<endl;
        }
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
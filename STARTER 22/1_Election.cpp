#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int a , b , c ;
        cin>> a >> b >> c;
        
        if(a>50 and b<=50 and c<=50)
        {
            cout<<"A"<<endl;
        }
        else if( b>50 and a<=50  and c<= 50)
        {
            cout<<"B"<<endl;
        }
        else if(c>50 and b<=50 and a<=50)
        {
            cout<<"C"<<endl;
        }

        else 
        cout<<"NOTA"<<endl;
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
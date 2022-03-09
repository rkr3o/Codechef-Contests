#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


void byte()

{       // x = solved problems of chef 
        // p = wrong submission 
        // y= solved problems of vhefina
        // q = wrong submision
        int x , y , p , q ;
        cin>> x >> y >> p >> q ;
        int total ;
         
        total = x + p * 10  ;
        int total1 ;
        total1 = y + q*10;

        if(total==total1)
        {
            cout<<"Draw"<<endl;
        } 
        else if(total>total1)
        {
            cout<<"Chefina"<<endl;
        }
        else {
            cout<<"Chef"<<endl;
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
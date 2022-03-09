#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)

#define ll long long int
//Author : RVI : THE DARK ASTER


void lucifer()

{
        ll val1,val2,val3;cin>>val1>>val2>>val3;
        if(val1%val2==0)
        {
            ll newVal=val1/val2;
            ll raw=val3*newVal;
            ll total1=0;
            for(int a=1;a<=sqrtl(raw);a++)
            {
                if(total1>val1)
                break;
                if(raw%a==0)
                {
                    total1=total1+a;
                    if(raw/a!=a)
                    total1=total1+raw/a;
                }
            }
            if(total1!=val1)
            {
                cout<<-1<<"\n";
            }
            else
            cout<<raw<<"\n";
        }
        else
        cout<<-1<<"\n";
    
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
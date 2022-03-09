#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int n , a ;
        cin >> n >>a;
        // n : total person
        // a : affected person
        int uniffected_p = n - a ;
        
        if(uniffected_p>a)
        {
             cout<<a<<endl;
        }
        else 
        cout<<uniffected_p<<endl;

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
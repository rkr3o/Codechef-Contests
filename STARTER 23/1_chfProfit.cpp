#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int x , y , z ;
        cin >> x >> y >> z ;

        int spend = x * y ;
        int spend2 = x*z;

        int finalValue = spend2 - spend ;

        cout<<finalValue <<endl;
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
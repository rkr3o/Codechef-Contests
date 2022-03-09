#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2;
        cin >> b1 >> b2;
        cin >> c1 >> c2;

         int x = a1 + a2 ;
        int y = b1 + b2 ;
        int z = c1 + c2 ;
        
     
        cout << max(x, max(y, z)) << endl;
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
#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
    long long int  n , d ;
    cin >> n >> d ;
    
    // n = pupulation , d = number of days
    // if day = 0 : only 1 ;
    // if day < = 10 : doubles a day or pow (2 , number of days)
    // if day > 11 : tripples a day  or pow(value of 10 days , 3 );

    long long  final = 1;
    for(long long i=1;i<=d;i++){
        if(i<=10){
            final = final * 2;
            if(final>n){ 
                final=n; 
                break;
            }
        }
        else { 
            final = final* 3;
            if(final>n){ 
                final=n;
                break;
            }
        }
    }
    cout << final << "\n";
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
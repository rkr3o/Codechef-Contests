#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int n , k ; // n = number of players 
        cin>>n>>k; // k = height of players
   
        int arr [n];
        for(int i = 0 ; i< n  ; i ++)
        {
            cin>> arr[i];
        }
        int counter = 0 ;
        for(int i = 0 ; i< n  ; i ++)
        {
           if(arr[i]>k)
           {
             counter ++ ;
           }
        }

        cout<<counter<<endl;
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
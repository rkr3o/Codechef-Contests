#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
   int n ; 
   cin>>n;

   int arr[n];
   for(int i = 0 ; i<n ; i++)
   {
       cin>> arr[i];

   }  
  
   sort(arr , arr+n) ;
   
   int sum=0 ; 
   for(int i = 1 ; i< n ; i++)
   {
        sum +=arr[i];
   } 
     

      cout<<sum<<"\n";
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
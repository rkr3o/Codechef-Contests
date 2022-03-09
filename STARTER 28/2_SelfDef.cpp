#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        int  n;
        cin>>n;
        int counter =0;

       int vec_Arr[n];
       for (int i = 0; i < n; i++)
       {
         cin>>vec_Arr[i];
       }
       
          
   for(int x : vec_Arr)
   {
        if(x>=10 and x<=60)
        {
           counter++;
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
lucifer();
}
}
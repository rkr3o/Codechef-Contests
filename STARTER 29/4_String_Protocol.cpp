#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        int n ; 
        cin>> n ;
        int counter = 0 ; 
        int counter2=0;
        string str ;
        cin>>str;
        for (int i = 0; i < n; i++)
        {
            if(str[i]==str[i+1])
            {
                counter++;
                i++;
            }
            else counter2++;
        }
        
        cout<<counter+counter2<<endl;
        
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
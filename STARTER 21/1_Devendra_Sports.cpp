#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int z ,y  , a , b , c;
        cin>> z >> y >> a >> b >> c ;

        int sum= z-y;
        int sum2 = a+ b + c;
        

        if(sum2<=sum)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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


/*
#include<stdio.h>
#include<cstdio>

int main()
{
    int t ;
    scanf("%d" , &t);

    while(t--)
    {
        int total , spent , a , b , c ;
        scanf("%d %d %d %d %d ", &total , &spent , &a , &b , &c);

        int balance = total-spent ;
        int totalMoney= a + b +c ;
         
         if(totalMoney<=balance)
         {
             printf("YES \n");
         }
         else{
             printf("NO \n");
         }
    }
    
}
*/

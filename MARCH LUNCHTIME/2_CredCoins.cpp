#include<iostream>
using namespace std ;

int main()
{
    int t ;
    cin>>t;
    while (t--)
    {
         int x , y ;
        cin>>x>>y;

        int total = x*y;
        int res=total/100;
      
       cout<<res<<endl;
    }
    
    return 0;
     
}
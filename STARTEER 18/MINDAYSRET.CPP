#include<iostream>
using namespace std;

int main()

{
    int t ; 
    cin>>t ;
    int count = 0 ;

    while(t--)
    {
        int n , k ;
        cin>>n>>k ; 
         int ans = n/k;
       if((n%k)!=0)
        ans++;
    
    cout<<ans<<endl;
}
    
    return 0;
}
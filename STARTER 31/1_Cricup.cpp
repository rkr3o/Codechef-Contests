#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin>>t;

    while (t--)
    {
        int x , y ,d ;
        cin>>x>>y>>d;

        int diff = abs(x-y);

        if(diff<=d)
        {
            cout<<"YES"<<endl;

        }
        else cout<<"NO"<<endl;

    }
    
}
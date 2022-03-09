#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ;
    cin>>t;

    while (t--)
    {
         int x1 , y1 , x2 , y2;
         cin>>x1>>y1>>x2>>y2;

        int num = x1-x2;
        int num2 = y1-y2;

        cout<<max(abs(num),abs(num2))<<endl;

    }
    
}
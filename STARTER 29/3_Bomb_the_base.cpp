#include<iostream>
using namespace std ;

int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
         int n , x ;
        cin >> n >>x  ;
        
        int arr[n];
        for (int i = 0; i < n; i++)
        {
           cin>>arr[i];
        }
        
        int counter = 0 ;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<x)
            {
                counter = i + 1 ;
            }
        }

        cout<<counter<<endl;
        
        
    }
    
}
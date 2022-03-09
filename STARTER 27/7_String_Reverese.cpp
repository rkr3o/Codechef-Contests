#include<iostream>
using namespace std;

int main()
{
    int num , pow;
    cin >> num >>pow ;

    int val = 1 ;
    for (int i = 0; i < pow; i++)
    {
        val=val*i;
    }
     
cout<<val;
}
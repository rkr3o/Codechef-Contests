#include<iostream>
using namespace std ;

int main()
{
     int chef=0;
        string arr[1];
        for (int i = 0; i < 1; i++)
        {
              getline(cin ,arr[i]);
        }
        
        for (int i = 0; i < 14; i++)
        {
          if(arr[i]=="C")
          {
            chef++;
          }
        }

        cout<<chef;
}
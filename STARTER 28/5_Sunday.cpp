#include <iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
     int num;
     cin>>num;  
     int arr[num];
     int count=8;
     for(int i=0;i < num;i++)
     {
         cin>>arr[i];
     }
     for(int i=0;i<num;i++){
         
     if(arr[i]!=6&&arr[i]!=7&&arr[i]!=13&&arr[i]!=14&&arr[i]!=20&&arr[i]!=21&&arr[i]!=27&&arr[i]!=28){
         count=count+1;
     }
     }
      cout<<count<<endl;
  }

    return 0;
}
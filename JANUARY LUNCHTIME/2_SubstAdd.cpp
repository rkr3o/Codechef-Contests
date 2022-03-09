#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER

  

int byte(int arr[], int n)
{
    int res = 0, i;
    for (i = 0; i < n; i++)
        res ^= arr[i];
    return res;
}
  

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
{
    int arr[] = { 10 , 6 , 8  };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << byte(arr, n);
    
}
}
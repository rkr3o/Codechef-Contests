#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >>t;
    while(t--)
    {
        int n ;
        cin >> n;
        int arr[] = {1, 3, 2, 4};
        int x = n / 4;
        int rem = n % 4;
        for (int i = 0; i < x; i++) {
            for (int j : arr) {
                cout << j << ' ';
            }
        }
        for (int i = 0; i < rem; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        
    }
}


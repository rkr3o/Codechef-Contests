#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void lucifer()

{
        
        long long n ;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long first = 1;
        long long second = 0;
        long long result = 0;
        for (long long i = 0; i < n ; i++)
        {

            if (arr[i] == 1)
            {
                result += n - first;
                first++;
            }
            if (arr[i] == 2)
            {
                result += second;
                second++;
            }
        }
        cout << result << endl;
    
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;
cin>>t;
while(t--){
lucifer();
}
}
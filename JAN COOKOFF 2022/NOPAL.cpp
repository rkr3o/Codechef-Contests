#include<bits/stdc++.h>
using namespace std;

#define int62_t
#define span(a) begin(a), end(a)


//Author : RVI : THE DARK ASTER


void byte()

{
        int n;
        cin >> n;
        int ch = 0;
        for (int i = 0; i < n; i++)
        {
            if (ch == 26)
            {
                ch = 0;
            }
            cout << char(ch + 97);
            ch++;
        }

        cout << endl;
    }
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr); cout.tie(nullptr);
int t;
cin>>t;
while(t--){
byte();
}
}

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  while (n--)
{
  int x, y ,a , b , k;
  cin>> x >> y >> a >> b >> k;

int petrol , diesel ;
petrol = x+(a*k);
diesel = y+(b*k);

if(petrol < diesel)
{
  cout<<"PETROL\n";
}
else if(petrol==diesel)
{
  cout<<"SAME PRICE\n";
}

else {
  cout<<"DIESEL\n";
}
}

	return 0;
}
	

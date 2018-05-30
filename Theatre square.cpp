#include <iostream>
using namespace std;

int main() {
	long long int n , m, a;
    cin>>n>>m>>a;

 long long int na=0,ma=0;
long long int d=(n*m)/(a*a);

if(d!=0)
{
if(n%a==0 && m%a==0) cout<<d;

else if(n%a==0 && m%a!=0)
{
    ma=m/a+1;
    na=n/a;
   
    
   cout<<ma*na;
}
else if(m%a==0 && n%a!=0)
{
    na=n/a+1;
    ma=m/a;
  
    cout<<na*ma;
}
else
{
na=n/a+1;
ma=m/a+1;
cout<<ma*na<<endl;
}
}

else
cout<<1;
	return 0;
}

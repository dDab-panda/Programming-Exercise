#include <iostream>
	#include <string>
	#include <ctype.h>
using namespace std;




int main() 
{
	int n=0;
	cin>>n;

	if(n!=1)

	{	string s;
		cin>>s;
		s.insert(s.begin(),'0');
	s.insert(s.end(),'0');
		int count0=0,flag=0;
		for (int i = 1; i < n+1; ++i)
		{
			if(s[i]=='1')
			{
				if(s[i-1]!='0' || s[i+1]!='0')
				{
					flag=1;
					break;
				}
				count0=0;
			}
			if(s[i]=='0')
				count0++;
			if(count0==3)
			{
				flag=1;
				break;
			}
		}
		if(!flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	else
	{
		int a=0;
		cin>>a;

		if(a==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}

	return 0;
}
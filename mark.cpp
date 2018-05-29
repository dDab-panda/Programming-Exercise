#include <iostream>
	#include <string>
	#include <ctype.h>
using namespace std;

int main() 
{
	int n=0;
	cin>>n;

	string a[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	

	int op[2]={0};
	for (int i = 0; i < n; ++i)
	{	
		for (int j = 0; j < 3; ++j)
		{
			if(a[i][j]=='+') op[0]++;
			if(a[i][j]=='-') op[1]++;
	
		}
	}

	cout<<(op[0]-op[1])/2<<endl;


	return 0;
}
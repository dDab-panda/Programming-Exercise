#include <iostream>
#include <string>
using namespace std;

int main() {
	int n=0,k=0;
	cin>>n>>k;
	
	int scr[n];

	for (int i = 0; i < n; ++i)
		cin>>scr[i];

	int count=0;

	for (int i = 0; i < n; ++i)
	{
		if(scr[i]!=0)
		{
			if(scr[k-1]<=scr[i]) count++;
		}
		else break;

	}
	cout<<count<<endl;

	return 0;
}

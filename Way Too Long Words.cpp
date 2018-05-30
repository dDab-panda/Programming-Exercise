#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin>>n;

	string arr[n];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	
	for(int i=0;i<n;i++)
	{
		if(arr[i].length()!=0 && arr[i].length()>4)
		{
			cout<<arr[i][0]<<arr[i].length()-2<<arr[i][arr[i].length()-1]<<endl;
		}
		else cout<<arr[i]<<endl;
	}

	return 0;
}

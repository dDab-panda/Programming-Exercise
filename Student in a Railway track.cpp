#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>
using namespace std;
// Problem link http://codeforces.com/contest/962/problem/B
int main() 
{
	long long int n=0,a=0,b=0,counta=0,countb=0;
	cin>>n>>a>>b;

	string s;
	cin>>s;
	

	
	vector<long long int> fll;
	vector<long long int> ety;

	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='.') ety.push_back(i);
		else fll.push_back(i);
	}
	
	if(ety.empty())
	{
		cout<<0<<endl;
		return 0;
	}	
	
	if(fll.empty())
	{
          if(a+b>n)
          {
               cout<<n<<endl; return 0;
          }
          
          else 
          {
                cout<<a+b<<endl; return 0;    
          }
	}

	long long int a1=a,b1=b;
	a=a1>b1?a1:b1;
	b=a1>b1?b1:a1;


	
	long long int c=0,d=0;
	for (int i = 0; i < fll.size()-1; i++)
	{
	   
		d=fll[i+1]-fll[i]-1;
		if(d!=0)
		{    c=fll[i]+1;
			while (c<fll[i+1] && a>0)
			{	
				s[c]='a';
				
			//	cout<<"a ="<<a<<" c = "<<c<<" & "<<"fll[i+1] = "<<fll[i+1]<<endl;
				a--;
				
				counta++;
				c=c+2;
				
			}
		
               c=fll[i]+2;
			while(c<fll[i+1] && b>0)
			{
				s[c]='b';
			//     cout<<"b ="<<b<<" c = "<<c<<" & "<<"fll[i+1] = "<<fll[i+1]<<endl;
				b--;
				countb++;
				c+=2;
			}
		}

		else continue ; 

	}
	
	if(ety[ety.size()-1]==n-1 && a>0) 
		{
			s[n-1]='a';
			a--;
			counta++;
		}
	if(ety[0]==0 && a>0) 
		{
			s[0]='a';
			a--;
			counta++;
		}
	cout<<counta+countb<<endl;

	return 0;
}
#include <iostream>
#include <string>
#include <ctype.h>
#include <vector>
#include <algorithm>
using namespace std;
//http://codeforces.com/problemset/problem/58/A
int find(string s, char h,int i )
{
	
	while(i<s.length())
	{
		if(s[i]==h) 
		{
			return i;
		}
		i++;
	}

	return -1;
}

int main() 
{
	string s;
	cin>>s;
	

	int idx[5]={0,0,0,0,0};
	int h=0,e=0,l=0,o=0;
	
	if(find(s,'h',0)==-1)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else idx[0]=find(s,'h',0);
	
	int d=0;
	
	for(int i=idx[0];i<s.length();i++)
	{
		if(find(s,'e',i)==-1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		else d=find(s,'e',i);
		
		if(d>idx[0])
		{ 
			idx[1]=d;
			break;
		}
		else continue;
	}

	for(int i=idx[1];i<s.length();i++)
	{
		if(find(s,'l',i)==-1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		else d=find(s,'l',i);
		
		if(d>idx[1])
		{ 
			idx[2]=d;
			break;
		}
		else continue;
	}

	for(int i=idx[2];i<s.length();i++)
	{
		if(find(s,'l',i)==-1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		else d=find(s,'l',i);
		
		if(d>idx[2])
		{ 
			idx[3]=d;
			break;
		}
		else continue;
	}

	for(int i=idx[3];i<s.length();i++)
	{
		if(find(s,'o',i)==-1)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		else d=find(s,'o',i);
		
		if(d>idx[3])
		{ 
			idx[4]=d;
			break;
		}
		else continue;
	}
	int flag=0;
	string hello="hello";
	for (int i = 0; i < 5; ++i)
	{
		if(hello[i]==s[idx[i]]) flag++;
	}

	if(flag==5) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

	return 0;
}
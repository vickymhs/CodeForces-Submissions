#include<bits/stdc++.h>
using namespace std;
long long i,j,c,k,z;
string s;
vector<char>v;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		z++;
	}
	if(z>=1)
	{
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				s[i]='2';
				break;
			}
		}
	}
	else
	{
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				s[i]='2';
				break;
			}
		}
	}
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='2')
		{
			continue;
		}
		cout<<s[i];
	}
}

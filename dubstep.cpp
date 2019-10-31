#include<bits/stdc++.h>
using namespace std;
string s,a;
int i,j,k,st,c;
int main()
{
	cin>>s;
	st=1;
	while(i<s.length())
	{
		a=s.substr(i,3);
		if(a=="WUB")
		{
			s.erase(i,3);
			s.insert(i,"*");
			i=0;
		}
		else
		i++;
	}
	//cout<<s<<endl;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='*' && s[i+1]=='*')
		{
			s.erase(i,1);
			i--;
		}
	}
	//cout<<s<<endl;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='*')
		{
			if(s[0]=='*')
			{
				s.erase(i,1);
				i--;
				//st=0;
			}
			else
			s[i]=' ';
		}
	}
	cout<<s;
}

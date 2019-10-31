#include<bits/stdc++.h>
using namespace std;
string s;
int i;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		cout<<s[i];
	}
	for(i=s.length()-1;i>=0;i--)
	{
		cout<<s[i];
	}
}

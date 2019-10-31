#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,k;
string s,x;
int main()
{
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
		{
			if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y')
			{
				s.erase(i+1,1);
				i--;
			}
		}
	}
	for(i=0;i<s.length();i++)
	{
		cout<<s[i];
	}
}

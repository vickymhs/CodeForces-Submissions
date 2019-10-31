#include<bits/stdc++.h>
using namespace std;
long long int i,j,c,f;
string s;
int main()
{
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='D' && s[i+1]=='a'&& s[i+2]=='n' && s[i+3]=='i' &&s[i+4]=='l')
		{
			f=1;c++;
		}
		else if(s[i]=='O' && s[i+1]=='l'&& s[i+2]=='y' && s[i+3]=='a')
		{
			f=1;c++;
		}
		else if(s[i]=='S' && s[i+1]=='l'&& s[i+2]=='a' && s[i+3]=='v' &&s[i+4]=='a')
		{
			f=1;c++;
		}
		else if(s[i]=='A' && s[i+1]=='n'&& s[i+2]=='n' )
		{
			f=1;c++;
		}
		else if(s[i]=='N' && s[i+1]=='i'&& s[i+2]=='k' && s[i+3]=='i' &&s[i+4]=='t' &&s[i+5]=='a')
		{
			f=1;c++;
		}
	}
	if(f==1 && c==1)
	cout<<"YES";
	else
	cout<<"NO";
}

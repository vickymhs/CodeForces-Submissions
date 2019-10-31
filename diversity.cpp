#include<bits/stdc++.h>
using namespace std;
long long int k,n,i,j;
string s;
set<char> c;
int main()
{
	cin>>s;
	cin>>k;
	for(i=0;i<s.length();i++)
	{
		c.insert(s[i]);
	}
	j=c.size();
	//cout<<j<<endl;
	
	if(k>s.length())
	{
		cout<<"impossible";
	}
	else
	{
		if(j>=k)
		cout<<0;
		else
		cout<<fabs(k-j);
	}
}

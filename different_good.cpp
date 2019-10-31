#include<bits/stdc++.h>
using namespace std;
int n,i,j,c[30],sum;
string s;
set<int>a;
int main()
{
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		a.insert(s[i]);
		c[s[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(c[i]>1)
		{
			sum+=c[i]-1;	
		}
	}
	if(a.size()==26)
	{
		if(sum!=0)
			cout<<-1;
		else
			cout<<sum;	
	}
	else if(a.size()<26)
	{
		if(sum>26- a.size())
		cout<<-1;
		else
		cout<<sum;
	}
	
}

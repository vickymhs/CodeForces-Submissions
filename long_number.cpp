#include<bits/stdc++.h>
using namespace std;
int n,i,j,a[10],x,v,c;
string s;
int main()
{
	cin>>n;
	cin>>s;
	for(i=1;i<=9;i++)
	{
		cin>>x;
		a[i]=x;
	}
	for(i=0;i<s.length();i++)
	{
		v=s[i]-'0';
		if(v<a[v])
		{
			s[i]=a[v]+'0';
			c++;
		}
		else if(v==a[v] && c==0)
		{
			continue;
		}
		else
		{
			if(c && v==a[v]);
			else if(c)
			break;
		}
	}
	cout<<s;
}

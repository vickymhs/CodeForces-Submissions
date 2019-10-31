#include<bits/stdc++.h>
using namespace std;
string s,t,p;
long long int n,i,j,k,c,pos[100005];
int main()
{
	cin>>s>>t;
	n=s.length();
	p=s;
	//cout<<"p  "<<p<<endl;
	for(i=0;i<n;i++)
	{
		if(s[i]!=t[i])
		{
			pos[j]=i;
			j++;
			c++;
		}
	}
	if(c%2==1)
	{
		cout<<"impossible";
		exit(0);
	}
	else
	{
		for(i=0;i<c/2;i++)
		{
			if(s[pos[i]]== '0')
			p[pos[i]]='1';
			else
			p[pos[i]]='0';	
		}
	}
	cout<<p;
}

#include<bits/stdc++.h>
using namespace std;
string a,b,c;
long int x[26],i,j;
int main()
{
	cin>>a>>b>>c;
	for(i=0;i<a.length();i++)
	{
		j=a[i]-65;
		x[j]++;
	}
	for(i=0;i<b.length();i++)
	{
		j=b[i]-65;
		x[j]++;
	}
	for(i=0;i<c.length();i++)
	{
		j=c[i]-65;
		x[j]--;
	}
	for(i=0;i<26;i++)
	{
		if(x[i])
		{
			cout<<"NO";
			exit(0);
		}
		
	}
	cout<<"YES";
}

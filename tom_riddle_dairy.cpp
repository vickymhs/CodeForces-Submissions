#include<bits/stdc++.h>
using namespace std;
string a[105];
long long int n,i,j,c,x[105];
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
			c++;
		}
		if(c>0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}

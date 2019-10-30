#include<bits/stdc++.h>

using namespace std;

int main()
{
	int c=0,j,i,n,h[105],a[105];
	cin>>n;
	for(i=0;i<n;i++)
	cin>>h[i]>>a[i];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(h[i]==a[j])
			c++;
		}
	}
	
	cout<<c;
}

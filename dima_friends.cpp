#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[105],s=0,c=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	
	for(i=1;i<=5;i++)
	{
		//cout<<s+i<<endl;
		if((s+i)%(n+1)!=1)
		{
			//cout<<i;
			c++;
			//break;
		}
	}
	cout<<c;
}

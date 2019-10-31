#include<bits/stdc++.h>
using namespace std;
int n,i,j,space,k;
int main()
{
	cin>>n;
	space=n;
	for(i=0;i<n+1;i++)
	{
		for(j=0;j<2*space;j++)
		cout<<" ";
		
		if(i==0)
		{
			cout<<0<<endl;
			space--;
			continue;
		}
		else
		{
			for(j=0;j<=i;j++)
			cout<<j<<" ";
			for(k=j-2;k>=0;k--)
			{
				cout<<k;
				if(k!=0)
				cout<<" ";
			}
			cout<<endl;
		}
		space--;
	}
	space=1;
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<2*space;j++)
		cout<<" ";
		if(i==0)
		{
			cout<<0;
			continue;
		}
		else
		{
			for(j=0;j<=i;j++)
			cout<<j<<" ";
			for(k=j-2;k>=0;k--)
			{
				cout<<k;
				if(k!=0)
				cout<<" ";
			}
			cout<<endl;
		}
		space++;
	}
}

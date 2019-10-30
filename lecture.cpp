#include<bits/stdc++.h>
using namespace std;
string a[3005],b[3005],c[3005],d[3005];
long int n,m,i,j,s;
int main()
{
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>a[i]>>b[i];
	}
	
	for(i=0;i<n;i++)
	{
		cin>>c[i];
		for(j=0;j<m;j++)
		{
			if(c[i]==a[j] || c[i]==b[j])
			{
				if(a[j].length()<=b[j].length())
				d[i]=a[j];
				else
				d[i]=b[j];
			}
		}	
	}
	for(i=0;i<n;i++)
	cout<<d[i]<<" ";
}

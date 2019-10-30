#include<bits/stdc++.h>
using namespace std;
long long int n,m,a[200],b[200],i,j,c,k;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cin>>m;
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(b,b+m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(fabs(a[i]-b[j])<=1)
			{
				c++;
				b[j]=1e4;
				break;
			}
		}
	}
	cout<<c;
}

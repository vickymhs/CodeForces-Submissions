#include<bits/stdc++.h>
using namespace std;
long int f,r,i,j,a[10005],n,k,p[100005],val;
long double maxi=-1.00000,avg,s;
int main()
{
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		p[i]=p[i-1]+a[i-1];
	}
	for(i=1;i<=n;i++)
	{
		f=i;
		r=i+k-1;
		while(r<=n)
		{
			s=p[r]-p[f-1];
			val=(r-f)+1;
			avg=(s/val);
			if(avg>maxi)
			maxi=avg;
			
			r++;
		}
	}
	cout<<fixed;
	cout<<setprecision(10)<<maxi;
}

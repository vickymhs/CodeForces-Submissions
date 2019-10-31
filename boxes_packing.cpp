#include<bits/stdc++.h>
using namespace std;
long long n,a[10005],i,j,k,c[100005];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		c[i]=2;
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j] && c[j]!=1)
			{
				c[i]=0;
				c[j]=1;
				//cout<<i<<" "<<j<<" "<<c[i]<<" "<<c[j]<<endl;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		//cout<<c[i]<<" ";
		if(c[i]!=0)
		k++;
	}
	//cout<<endl;
	//cout<<n-c;
	cout<<k;
}

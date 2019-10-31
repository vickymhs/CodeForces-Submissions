#include<bits/stdc++.h>
using namespace std;
long long int n,x,i,j,c,k,f,a[1000005];
int main()
{
	cin>>n;
	a[0]=0;
	a[1]=1;
	for(i=2;i<=sqrt(1000005);i++)
	{
		if(a[i]==0)
		{
			for(j=i*i;j<1000005;j+=i)
			a[j]=1;
		}
	}
	
	for(i=0;i<n;i++)
	{
		f=0;
		cin>>x;
		k=sqrt(x);
		//cout<<k;
		if(k*k==x)
		f=1;
		
		if(a[k]==0 && f==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}

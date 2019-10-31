#include<bits/stdc++.h>
using namespace std;
long long n,i,j,s,spf[100005],k,u;
int sieve()
{
	spf[1]=1;
	for(i=2;i<100005;i++)
		spf[i]=i;
	for(i=4;i<100005;i+=2)
		spf[i]=2;
	for(i=3;i*i<100005;i++)
	{
		if(spf[i]==i)
		{
			for(j=i*i;j<100005;j+=i)
			{
				if(spf[j]==j)
					spf[j]=i;
			}
		}
	}
}
int main()
{
	cin>>n;
	sieve();
	s=n;
	while(n>1)
	{
		k=n/spf[n];
		s+=k;
		//cout<<s<<" ";
		n/=spf[n];
	}
	cout<<s;
}

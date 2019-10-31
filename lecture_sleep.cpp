#include<bits/stdc++.h>
using namespace std;
long long int a[100005],prefix[1000005],ones[100005],l,r,i,j,c,k,n,t,sum,maxi;
int main()
{
	cin>>k>>n;
	for(i=1;i<=k;i++)
	{
		cin>>a[i];
		prefix[i]=prefix[i-1]+a[i];
	}
	for(i=1;i<=k;i++)
	{
		cin>>t;
		if(t==1)
		{
			ones[i]=ones[i-1]+a[i];
		}
		else
		{
			ones[i]=ones[i-1];
		}
	}

	l=1;r=n;
	while(r<=k)
	{
		sum=ones[l-1]+(prefix[r]-prefix[l-1])+(ones[k]-ones[r]);
		//cout<<sum<<endl;
		maxi=max(sum,maxi);
		l++;r++;
	}
	//cout<<"maxi  ";
	cout<<maxi;
}

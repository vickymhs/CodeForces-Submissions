#include<bits/stdc++.h>
using namespace std;
int n,i,k,a[105],sum,maxi,val;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	maxi=*max_element(a,a+n);
	i=maxi;
	while(i<=100000)
	{
		val=i*n;
		k=val-sum;
		if(k>sum)
		{
			cout<<i;
			break;
		}
		i++;
	}
}

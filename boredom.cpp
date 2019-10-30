#include<bits/stdc++.h>
using namespace std;
long long int n,a[100005],dp[100005],c,i,j,k,l,x;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		l=max(l,x);
		a[x]++;
	}
	//cout<<l<<endl;
	
	dp[0]=0;
	dp[1]=a[1];
	for(i=2;i<=l;i++)
	{
		dp[i]=max(dp[i-1], dp[i-2] + (a[i]*i));
	//	cout<<i<<" : "<<dp[i]<<endl;;
	}
	
	cout<<*max_element(dp,dp+l+1);
}

#include<bits/stdc++.h>
using namespace std;
long long int n,a,b,c,x,y,i,dp[5000];
int main()
{
	cin>>n>>a>>b>>c;
	dp[0]=0;
	
	dp[a]=1;
	dp[b]=1;
	dp[c]=1; 
	
	//int t=min(a,min(b,c));
	
	for(i=1;i<=n;i++)
	{
		//cout << dp[i-a] << " " << dp[i-b] << " " << dp[i-c];
		if(i>=a && dp[i-a]!=0)
		dp[i]=max(dp[i],dp[i-a] +1);
		
		if(i>=b && dp[i-b]!=0)
		dp[i]=max(dp[i],dp[i-b] +1);
		
		if (i>=c && dp[i-c]!=0)
		dp[i]=max(dp[i],dp[i-c] +1);
		
		//cout<<i<<" "<<dp[i] << endl;
	}
	
	cout<<dp[n];
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,i,j,s=0,a[100][100];
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1)
			a[i][j]=1;
			
			else if(j==1)
			a[i][j]=1;
		}
	}
	
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=n;j++)
		{
			a[i][j]=a[i-1][j]+a[i][j-1];
		//	cout<<a[i][j]<<"\n";
		}
	//	cout<<endl;
	}
	
	cout<<a[n][n];
}

#include<bits/stdc++.h>
using namespace std;
int n,a[1005],i;
int func(int v)
{
	int j,visited[1005];
	for(j=1;j<=n;j++)
		
		visited[j]=0;
	
	visited[i]++;
	while(1)
	{
		visited[v]++;
		if(visited[v]==2)
			break;
		v=a[v];
	}
	cout<<v<<" ";
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		func(a[i]);
	}
}

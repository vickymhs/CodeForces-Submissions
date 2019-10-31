#include<bits/stdc++.h>
using namespace std;
int n,s,a[1005],b[1005],i,j,visited[1005],dir;
int main()
{
	cin>>n>>s;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	
	if(a[0]==0)
	{
		cout<<"NO";
		return 0;
	}
	i=0;dir=1;
	while(i<n && i>=0)
	{
		//cout<<i<<endl;
		if(dir==1)
		{
			if(a[i]==1)
				visited[i]=1;
		}
		else
		{
			if(b[i]==1)
				visited[i]=1;
		}
		if(i>s-1)
		{
			if(a[i]==1 && b[i]==1)
				dir=-1;
		}
		
		
		i+=dir;
	}
	if(visited[s-1]==1)
	cout<<"YES";
	else
	cout<<"NO";
}

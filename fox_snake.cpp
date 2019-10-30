#include<bits/stdc++.h>

using namespace std;
int main()
{
	long long int n,m,i;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		
		if(i%2==0)
		{
		int k=i/2;
		
		if(k%2!=0)
		{
			for(int j=1;j<m;j++)	
			cout<<".";
			cout<<"#";		
		}
		
		else if(k%2==0)
		{
			cout<<"#";
			for(int j=2;j<=m;j++)	
			cout<<".";
				
			}
		}
		else
		for(int j=1;j<=m;j++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}
}

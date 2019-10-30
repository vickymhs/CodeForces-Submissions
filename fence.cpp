#include<bits/stdc++.h>
using namespace std;
long long int h[200000],p[1000005];
long long int n,k,i,j;
long long int pos,y,x;

int main()
{
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>h[i];
		p[i]=p[i-1]+h[i];
	}
	j=1;
	
	if(k<n)
	{
		y=p[k];
		//cout<<"y "<<y<<endl;
		for(i=k+1;i<=n;i++)
		{	
		x=p[i]-p[i-k];
		//cout<<i<<" "<<i-k<<" "<<x<<endl;
		if(x<y)
		{
			y=x;
			j=i-k+1;
		}		
		}
	}
	else
	{
		j=1;
	}	
	cout<<j;
	
	
}

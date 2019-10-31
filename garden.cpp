#include<bits/stdc++.h>
using namespace std;
long int n,k,i,j,maxi,x,y,a;
int main()
{
	cin>>n>>k;
	maxi=1e7;
	for(i=0;i<n;i++)
	{
		cin>>x;
		y=k/x;
		a=y*x;
		//cout<<a<<" ";
		
		if(a==k)
		{
			//cout<<y<<" ";
			maxi=min(maxi,y);
		}
		
		//cout<<maxi<<endl;
	}
	cout<<maxi;
}

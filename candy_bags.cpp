#include<bits/stdc++.h>
using namespace std;
long int x[1000005],y[1000005];
int main()
{
	int n,i,j,k=1;
	cin>>n;
	for(i=1;i<=(n*n)/2;i++)
	{
		x[k]=i;
		y[k]=(n*n)-i+1;
		k++;
	}
	//for(i=1;i<k;i++)
	//cout<<x[i]<<" "<<y[i]<<endl;
	
	k=1;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=(n/2);j++)
		{
			cout<<x[k]<<" "<<y[k]<<" ";
			k++;
		}
		cout<<endl;
	}
	
}

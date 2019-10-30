#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[4000],b[4000],j=0,k=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			a[j]=i;
			j++;
		}
		else
		{
			b[k]=i;
			k++;
		}
	}
	if(n==1 || n==2)
	{
		cout<<1<<endl<<1;
		return 0;
	}
	else if (n==3)
	{
		cout<<2<<endl<<1<<" "<<3;
		return 0;
	}
	else
	{
		cout<<j+k<<endl;
		for(i=j-1;i>=0;i--)
		cout<<a[i]<<" ";
		for(i=k-1;i>=0;i--)
		cout<<b[i]<<" ";
	}
	
}

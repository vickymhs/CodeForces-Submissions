#include<bits/stdc++.h>
using namespace std;
int n,k,i,j,sum;
int main()
{
	cin>>n>>k;
	if(k==1 || k==n)
	{
		cout<<(n*3);
	}
	else
	{
		j=k;
		sum+=6;
		if( n-k < k-1)
		{
			k++;
			sum+=(n-k)*3;
			sum+=(n-j);
			k=j;
			sum+=(k-1)*3;
		}
		else
		{
			k--;
			sum+=(k-1)*3;
			//cout<<sum<<" ";
			sum+=j-1;
			k=j;
			sum+=(n-k)*3;
		}
		
		cout<<sum;
		
	}
}

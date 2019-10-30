#include<bits/stdc++.h>
using namespace std;
long long int n,m,a,j,i,flag;
int main()
{
	cin>>n;
	for(i=1;i<=1000;i++)
	{
		a=(n*i)+1;
		for(j=2;j<=sqrt(a);j++)
		{
			if(a%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<i;
			exit(0);
		}
		
	}
}

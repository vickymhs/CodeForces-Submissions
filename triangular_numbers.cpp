#include<bits/stdc++.h>
using namespace std;
long int n,i,j,k;
int main()
{
	cin>>n;
	for(i=1;i<=1000;i++)
	{
		j=(i * (i+1))/2;
		if(n==j)
		{
			cout<<"YES";
			return 0;
		}
		else if(j>n)
		{
			cout<<"NO";
			return 0;
		}
	}
}

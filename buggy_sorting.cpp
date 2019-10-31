#include<bits/stdc++.h>
using namespace std;
int n,i,j;
int main()
{
	cin>>n;
	if(n==1 || n==2)
	{
		cout<<-1;
	}
	else
	{
		for(i=n;i>=1;i--)
		cout<<i<<" ";
	}
}

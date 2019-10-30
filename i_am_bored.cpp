#include<bits/stdc++.h>
using namespace std;
long long int a,b,x=1;
int main()
{
	cin>>a>>b;
	for(int i=1;i<=min(a,b);i++)
	{
		x=x*i;
	}
	cout<<x;
}

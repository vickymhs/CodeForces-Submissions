#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,c;
int main()
{
	cin>>n;
	while(n>0)
	{
		c=c+(n%2);
		n=n/2;
	}
	cout<<c;
}

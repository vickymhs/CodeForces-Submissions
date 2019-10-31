#include<bits/stdc++.h>
using namespace std;
long long int n,k,i,j,d,c;
int main()
{
	cin>>n>>k;
	while(k)
	{
		d=n%10;
		if(d)
		n--;
		else
		{
			n=n/10;
		}
		k--;
	}
	cout<<n;
}

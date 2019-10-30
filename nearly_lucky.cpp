#include<bits/stdc++.h>
using namespace std;
long long int n,c=0,d;
int main()
{
	cin>>n;
	while(n>0)
	{
		d=n%10;
		if(d==4 || d==7)
		c++;
		n=n/10;
	}
	if(c==4 || c==7)
	cout<<"YES";
	else
	cout<<"NO";
}

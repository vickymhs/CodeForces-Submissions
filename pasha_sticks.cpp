#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,c,s;
int main()
{
	cin>>n;
	if(n%2==0)
	{
		n=n/2;
		if(n>0)
		{
			if(n%2==1)
				cout<<n/2;
			else
				cout<<(n/2)-1;
		}
		else
		cout<<0;
	}
	else
	cout<<0;
		
}

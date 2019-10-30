
#include<bits/stdc++.h>

using namespace std;
long long int x,n,i,j,c;

int main()
{
	cin>>n>>x;
	for(i=1;i<=min(n,x);i++)
	{
		if(x%i==0 && x/i <=n)
		c++;
		//cout<<i<<" "<<c<<endl;
	}
	cout<<c;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int x,y,n;
	long double i;
	cin>>n>>x>>y;
	i=(y*n)/100.0;
	//cout<<i<<endl;
	i=ceil(i);
	//cout<<i<<endl;
	if(x-i >=0)
	cout<<0;
	else
	cout<<fabs(x-i);
}

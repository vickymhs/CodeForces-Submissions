#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,d;
int main()
{
	cin>>n;
	d=n%10;
	if(d<=5)
	n-=d;
	else 
	n=n+(10-d);
	cout<<n;
}

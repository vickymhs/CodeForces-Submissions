#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,c,k,a,b,s;
int main()
{
	cin>>a>>b;
	c=(a+b)/2;
	i=fabs(c-a);
	s+=(i*(i+1))/2;
	j=fabs(b-c);
	s+=(j*(j+1))/2;
	cout<<s;
}


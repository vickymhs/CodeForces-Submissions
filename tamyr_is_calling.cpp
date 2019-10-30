#include<bits/stdc++.h>
using namespace std;
long long int n,m,z,i,j;
int main()
{
	cin>>n>>m>>z;
	i=(n*m)/__gcd(n,m);
	j=z/i;
	cout<<j;
}

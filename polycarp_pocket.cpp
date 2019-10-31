#include<bits/stdc++.h>
using namespace std;
long int n,a,i,j,c[105];
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		c[a]++;
	}
	cout<<*max_element(c,c+101);
}

#include<bits/stdc++.h>
using namespace std;
long int n,i,j,k;
int main()
{
	cin>>n;
	j=1;
	for(i=1;i<n;i++)
	{
		j=j+i;
		if(j!=n)
		j=j%n;
		
		cout<<j<<" ";
	}
}

#include<bits/stdc++.h>
using namespace std;
long long int a,b,c,n,i,j,x;
int main()
{
	cin>>a>>b>>c;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		
		if(x>b && x<c)
		j++;
	}
	cout<<j;
}

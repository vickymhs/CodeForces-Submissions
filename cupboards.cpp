#include<bits/stdc++.h>
using namespace std;
long long int n,l[100005],r[100005],i,j,a,b,c,d;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>l[i]>>r[i];
		if(l[i]==0)
		a++;
		else  b++;
		if(r[i]==0)
		c++;
		else	d++;
	}
	cout<<min(a,b)+min(c,d);
}

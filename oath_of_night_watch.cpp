#include<bits/stdc++.h>
using namespace std;
long long int n,a[1000005],i,j,k,c;

int main()
{
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	j=*max_element(a,a+n);
	k=*min_element(a,a+n);
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(a[i]!=k && a[i]!=j)
		c++;
	}
	cout<<c;

}

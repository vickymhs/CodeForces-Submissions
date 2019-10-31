#include<bits/stdc++.h>
using namespace std;
int a[100005],i,j,n,x;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	x=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]%x!=0)
		{
			cout<<-1;
			return 0;
		}
	}
	cout<<x;
	
}

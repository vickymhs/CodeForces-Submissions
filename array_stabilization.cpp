#include<bits/stdc++.h>
using namespace std;
int n,a[100005],i,j,val1,val2;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	val1=a[n-2]-a[0];
	val2=a[n-1]-a[1];
	cout<<min(val1,val2);
	return 0;
}

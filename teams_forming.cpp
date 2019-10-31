#include<bits/stdc++.h>
using namespace std;
int n,a[105],i,j,s;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	i=0;
	while(i<n)
	{
		s+=fabs(a[i]-a[i+1]);
		i+=2;
		//cout<<s<<" ";
	}
	//cout<<endl;
	cout<<s;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
//long long int n,l,i,c,j;
double s,m,a[10005],l,c,j;
int i,n;
int main()
{
	cin>>n>>l;
	for(i=0;i<n;i++)
	cin>>a[i];
	
	sort(a,a+n);
	 m=max(a[0]-0, l-a[n-1]);
	for(i=1;i<n;i++)
	{
		s=((a[i]-a[i-1])/2.0);
		 m=max(double(m), double(s));		
		//cout<<setprecision(10)<<m<<"\n";
	}
	
	cout<<setprecision(10)<<m;
}

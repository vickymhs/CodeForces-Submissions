#include<bits/stdc++.h>
using namespace std;
long long n,i,a[100005],s,d;
int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
		s=s+a[i]-d;
		if(a[i]>a[i+1])
		{
			//s=s+a[i]-d;
			//cout<<s<<" ";
			d=a[i]-a[i+1];
			s=s+d;
			//cout<<s<<" ";
			d=a[i+1];
		}
		else
		{
			d=a[i];
			//cout<<s<<" ";
		}
		s++;
		//cout<<s<<" ";
	}
	s=s+a[i]-d;
	//cout<<s<<" ";
	//cout<<endl;
	cout<<s+n;
}

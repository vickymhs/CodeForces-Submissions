#include<bits/stdc++.h>
using namespace std;
long long int a[3],m,s;
int main()
{
	for(int i=0;i<3;i++)
	cin>>a[i];
	sort(a,a+3);
	//for(int i=0;i<3;i++)
	//cout<<a[i]<<" ";
	s=s+fabs(a[0]-a[1])+fabs(a[2]-a[1]);
	cout<<s;
}


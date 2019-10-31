#include<bits/stdc++.h>
using namespace std;
long long int n,s=1;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s=s*2;
		if(s==8192)
		s=8092;
	}
	cout<<s;
}

#include<bits/stdc++.h>
using namespace std;
long long int k,n,y,i,s,x,a,b;
int main()
{
	cin>>y>>k>>n;

	s=(n/k)-(y/k);
	//cout<<s;
	if(s<=0)
	cout<<-1;
	else
	{
		a=y/k ;
		a=a*k;
		while(s>0)
		{
			a=a+k;
			cout<<a-y<<" ";
			s--;
		}
	}
}

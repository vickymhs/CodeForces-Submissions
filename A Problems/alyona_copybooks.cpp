#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,a,b,c,s=0,d,k;
	cin>>n>>a>>b>>c;
	k=4-(n%4);
	//cout<<k<<endl;
	if(k==4)
	cout<<0;
	if(k==1)
	cout<<min(a,b+c);
	//cout<<min(a,min((2*b),(3*c)));
	//cout<<a;
	if(k==2)
	{
		s=min(2*a,min(b,2*c));
		cout<<s;
	}
	if(k==3)
	{
		s=min(c,min((3*a),(a+(b))));
		cout<<s;
	}
}

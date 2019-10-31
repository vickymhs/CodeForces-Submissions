#include<bits/stdc++.h>
using namespace std;
int n,a,b,x,k,c,d;

int func(int a, int b)
{
	if(a%2==1)
	a++;
	
	if(b%2==1)
	b++;
	
	//cout<<a<<" "<<b<<endl;
	c=a/2;
	d=b/2;
	//cout<<c<<" "<<d<<endl;
	if(c==d)
	return 1;
	else
	return (1+func(c,d));
}

int main()
{
	cin>>n>>a>>b;
	x=ceil(log(n)/log(2));
	//cout<<x<<endl;
	k=func(a,b);
	if(k==x)
	cout<<"Final!";
	else
	cout<<k;
}

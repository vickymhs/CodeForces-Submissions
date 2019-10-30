#include<bits/stdc++.h>
using namespace std;
long long int n,a,b,c,d,s,i,k;
int main()
{
	cin>>n>>a>>b>>c;
	d=b-c;
	if(n<a && n<b)
	{
		cout<<0;
		exit(0);
	}
	
	if(a<=b-c)
	cout<<(n/a);
	else
	{
		if(n>=b)
		{k=n-c;
		i=(k/d);
		n=n-(i*d);
		cout<<(i)+(n/a);}
		else
		cout<<(n/a);
	}
	
	/*while(s>=0)
	{
		s=s+c;
		i++;
		s=s-d;
	}
	cout<<i;*/
}

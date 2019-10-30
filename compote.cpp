#include<bits/stdc++.h>
using namespace std;
long int a,b,c,s=0;
int main()
{
	cin>>a>>b>>c;
	if(a>=1 && b>=2 && c>=4)
	{
		a=a-1;
		b=b-2;
		c=c-4;
		while(a>=0 && b>=0 && c>=0)
		{
			s+=7;
			a=a-1;
		b=b-2;
		c=c-4;
		}
	}
	else
	s=0;
	
	cout<<s;
}

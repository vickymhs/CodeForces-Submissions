#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,s=0,x,y;
	cin>>a>>b;
	s=s+a;
	if(a==b)
	cout<<s+1;
	else
	{
		while(a>0 && a>=b)
		{
			x=a/b;
			y=a%b;
			s=s+x;
			a=x+y;
			//s=s+a;
			
			//s=s+((x+y)/b);
			//a=a/b;
		}
	cout<<s;
	}
	
}

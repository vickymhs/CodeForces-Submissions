#include<iostream>

using namespace std;
int main()
{
	int a,b,i,j,c=0,d=0;
	cin>>a>>b;
	
	while(a!=0 && b!=0)
	{
		a--;
		b--;
		c++;
	}
	
	if(a==0 && b!=0)
	{
		while(b>1)
		{
			b=b-2;
			d++;
		}
	}
	
	else if(b==0 && a!=0)
	{
		while(a>1)
		{
			a=a-2;
			d++;
		}
	}
	
	else
	;
	
	cout<<c<<" "<<d;
}

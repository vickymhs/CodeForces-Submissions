#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x,c=0;
	//11 jack 12 queen 13 king
	
	
	cin>>n;
	x=n-10;
	if(n==10)
	cout<<0;
	else
	{
		while(x>0)
		{
			if(x>=2 && x<=9)
			{
				c=c+4;
				x=0;
			}
			
			else if(x==10)
			{
				c=c+15;
				x=0;
			}
			else if(x==1 || x==11)
			{
				c=c+4;
				x=0; 
			}
			
			else if(x>=11)
			{
				//c=c+4;
				x=0;
			}
		}
		
		cout<<c;
		}	
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x,n,a,b;
	cin>>n>>a>>b;
	x=fabs(b);
	while(x>0)
	{
		if(b<0)
		{
			if(a==1)
			{
				a=n;
			}
			else
			a--;
			
		//	n--;
		x--;
		}
		
		else if(b>0)
		{
			if(a==n)
			{
				a=1;
			}
			else
			a++;
			
			//n--;
			x--;
		}
		
	}
	cout<<a;
}

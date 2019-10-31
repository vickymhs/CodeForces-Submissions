#include<bits/stdc++.h>
using namespace std;
int x,y,a,b,i,j;
int main()
{
	cin>>x;
	if(x==1)
	{
		cout<<-1;
		return 0;
	}
	else
	{
		for(i=1;i<=x;i++)
		{
			a=i;
			for(j=1;j<=i;j++)
			{
				b=a*j;
				if(a%b==0 && a*b>x && a/b <x && b<=x)
				{
					cout<<a<<" "<<b;
					return 0;
				}
			}
		}
		cout<<-1;
	}
}

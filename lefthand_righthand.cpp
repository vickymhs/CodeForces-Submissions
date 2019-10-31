#include<bits/stdc++.h>
using namespace std;
long long int i,j,l,r,a,c,x,fr,fl;
int main()
{
	cin>>l>>r>>a;
	x=(l+r+a)/2;
	if(l==r)
	{
		l=l+(a/2);
		r=r+(a-(a/2));
		cout<<min(l,r)*2;
		return 0;
	}
	else
	{
		while(a!=0)
		{
			if(l<=r)
			{
				l++;
				a--;
			}
			else
			{
				r++;
				a--;
			}
		}
		cout<<min(l,r)*2;
	}
}

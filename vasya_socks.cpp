#include<bits/stdc++.h>
using namespace std;
int n,m,c,i;
int main()
{
	cin>>n>>m;
	while(n!=0)
	{
		n--;
		c++;
		if(c==m)
		{
			n++;
			c=0;
		}
		i++;
	}
	cout<<i;
}

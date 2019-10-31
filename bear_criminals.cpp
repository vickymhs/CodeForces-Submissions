	#include<bits/stdc++.h>
	using namespace std;
	int n,i,j,a[105],x,l,r,c;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>x;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		l=x;r=x;
		while(l>=1 || r<=n)
		{
			if(a[l]==1 &&  a[r]==1 && l>=1 && r<=n)
			{
				if(l==r)
					c++;
				else
					c+=2;
			}
			else if((l>=1 && r>n) && a[l]==1)
				c++;
			else if((r<=n && l<1) && a[r]==1)
				c++;
			l--;
			r++;
		}
		cout<<c;
		return 0;
	}

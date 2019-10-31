	#include<bits/stdc++.h>
	using namespace std;
	int c1,c2,k1,k2,n,i,j;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>c1>>c2>>k1>>k2;
		i=0;
		while(1)
		{
			if(i%2==0)
			{
				if(c1<=0)
				{
					cout<<"Second";
					break;
				}
				c1-=1;
			}
			else
			{
				if(c2<=0)
				{
					cout<<"First";
					break;
				}
				c2-=1;
			}
			i++;
		}
		return 0;
	}

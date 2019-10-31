	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,m,two,three,f;
	string s;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>m;
		i=m/n;
		if(i*n !=m)
		{
			cout<<-1;
			return 0;
		}
		else
		{
			if(i==1)
			{
				cout<<0;
				return 0;
			}
			else
			{
				while(i>1)
				{
					if(i%2==0)
					{
						i=i/2;
						two++;
					}
					else if(i%3==0)
					{
						i=i/3;
						three++;
					}
					else
					{
						f=1;
						break;
					}
				}
				if(f==1)
					cout<<-1;
				else
					cout<<two+three;
			}
		}
		return 0;
	}

	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,mini,maxi,n1;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		//minimum
		i=0;
		n1=n;
		while(n>0)
		{
			if(i%2==0)
				n-=5;
			else
			{
				if(n==1)
				{
					n-=1;
					mini+=1;
				}
				else
				{
					n-=2;
					mini+=2;
				}
			}
			i++;
		}
		i=0;
		//maximum
		while(n1>0)
		{
			if(i%2==0)
			{
				if(n1==1)
				{
					n1-=1;
					maxi+=1;
				}
				else
				{
					n1-=2;
					maxi+=2;
				}
			}
			else
			{
				n1-=5;
			}
			i++;
		}
		cout<<mini<<" "<<maxi;
		return 0;
	}

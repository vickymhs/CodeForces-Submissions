#include<bits/stdc++.h>
using namespace std;
long long int a,b,s,f=1,c,i;
int main()
{
	i=1;
	cin>>a>>b;
	while(f!=0)
	{
		if(i%2!=0)
		{
			if(i<=a)
			{
				a=a-i;
				i++;
				f=1;
			}
			else
			{
				f=0;
				cout<<"Vladik";
			}
		}
		
		else
		{
			if(i<=b)
			{
				b=b-i;
				i++;
				f=1;
			}
			else
			{
				f=0;
				cout<<"Valera";
			}
		}
	}
}

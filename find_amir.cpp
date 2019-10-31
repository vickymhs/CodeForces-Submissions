#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,s,c;
int main()
{
	cin>>n;
	c=1;i=1;j=n;
	while(c!=n)
	{
		s=s+((i+j) % (n+1));
		//cout<<i<<"  "<<j<<"  ";
		
		if(c%2!=0)
		{	
			i++;
			c++;
		}
		else
		{
			j--;
			c++;
		}
	//	cout<<s<<endl;
	}
	
	cout<<s;
}

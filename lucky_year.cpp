#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,c,d,k=1;
int main()
{
	cin>>n;
	j=n;
	while(j!=0)
	{
		c++;
		j=j/10;
	}
	
	//cout<<c<<endl;
	j=n;
	if(c==1)
	cout<<1;
	else
	{
		for(i=1;i<c;i++)
		{
			j=j/10;
		}
		//cout<<j<<endl;
		j++;
		for(i=1;i<c;i++)
		k=k*10;
		
		k=k*j;
		cout<<(k-n);
	}
}

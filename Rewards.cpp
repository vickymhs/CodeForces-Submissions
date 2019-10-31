#include<bits/stdc++.h>
using namespace std;
long long int n,a1,a2,a3,b1,b2,b3,i,j,c,d;
int main()
{
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	d=(a1+a2+a3)%5;
	if(d==0)
	i=(a1+a2+a3)/5;
	else
	{
		i=(a1+a2+a3)/5;
		i++;	
	}
	d=(b1+b2+b3)%10;
	if(d==0)
	j=(b1+b2+b3)/10;
	else
	{
		j=(b1+b2+b3)/10;
		j++;
	}
	if(n>=(i+j))
	cout<<"YES";
	else
	cout<<"NO";
}

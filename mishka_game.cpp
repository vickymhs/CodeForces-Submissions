#include<iostream>

using namespace std;

int main()
{
	int a[105],b[105],n,i,j,c1=0,c2=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>a[i]>>b[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]>b[i])
		c1++;
		else if(b[i]>a[i])
		c2++;
	}
	
	if(c1>c2)
	cout<<"Mishka";
	else if(c2>c1)
	cout<<"Chris";
	else
	cout<<"Friendship is magic!^^";
}

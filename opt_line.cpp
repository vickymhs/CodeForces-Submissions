#include<iostream>
#include<algorithm>
using namespace std;
long long int n,i,a[300005],sum=0,y;
long long int b[300005];
int main()
{
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		//sum=sum+a[i];
	}
	sort(a,a+n);
	/*for(i=0;i<n;i++)
	{
		b[i]=sum-a[i];
	}
	
	y=min_element(b,b+n);
	cout<<a[y];*/
	if(n%2==0)
	y=n/2 -1;
	else
	y=n/2;
	
	cout<<a[y];
}



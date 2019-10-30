#include<iostream>

using namespace std;

int main()
{
	int s=0,k,w,n,m;
	
	cin>>k>>n>>w;
	
	for(int i=1;i<=w;i++)
	{
		s=s+(i*k);
	}
	//s=((w/2)*((2*k)+((w-1)*k)));
	m=s-n;
	if(m<=0)
	cout<<"0";
	
	else
	cout<<m;
	
}


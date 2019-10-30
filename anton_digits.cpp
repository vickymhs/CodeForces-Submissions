#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int k2,k3,k5,k6,s=0,c,i,j;
	cin>>k2>>k3>>k5>>k6;
	
	i=min(k2,min(k5,k6));
	//cout<<i<<endl;
	s=s+(i*256);
	k2=k2-i;
	k5=k5-i;
	k6=k6-i;
	j=min(k2,k3);
	//cout<<j<<endl;
	s=s+(j*32);
	cout<<s;
	
}

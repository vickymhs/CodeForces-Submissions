#include<bits/stdc++.h>
using namespace std;
long long int c,k,n,i,j,y,d,s;
string a,b;
int main()
{
	cin>>k;
	cin>>a;
	j=a.length();
	long long int x[j];
	for(i=0;i<a.length();i++)
	{
		s=s+char(a[i]-48);
		x[i]=char(a[i]-48);
	}
	//cout<<"sum "<<s<<endl;
	
	//cout<<"diff "<<y<<endl;
	sort(x,x+j);
	
	//for(i=0;i<j;i++)
	//cout<<x[i];
	//cout<<endl;
	
	i=0;
	while(s<k)
	{
		s=s-x[i]+9;
		c++;
		i++;
		//cout<<y<<endl;
	}
	cout<<c;
	
}

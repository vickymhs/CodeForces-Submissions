#include<bits/stdc++.h>
using namespace std;
string s,x,y;
long long int i,j,n;
int main()
{
	cin>>s;
	i=0;j=s.length()-1;
	while(i<j)
	{
		//cout<<s[i]<<" "<<s[j]<<endl;
		if(s[i]==s[j])
		{
			x=x+s[i];
			i++;
			j--;
		}
		if(s[i]!=s[j])
		{
			x=x+s[i];
			i++;
		}
		//cout<<x<<endl;
	}
	
	if(x.length()>1)
	{
		for(j=0;j<x.length()/2;j++)
		swap(x[j],x[x.length()-1-j]);
	}	
	//cout<<x<<endl;
	//cout<<i<<endl;
	for(j=0;j<=i;j++)
	cout<<s[j];
	cout<<x<<endl;
}

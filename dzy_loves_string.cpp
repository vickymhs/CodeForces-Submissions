#include<bits/stdc++.h>
using namespace std;
string s;
long long int k,i,j,c,sum,a[27],pos;
int main()
{
	cin>>s;
	cin>>k;
	for(i=0;i<26;i++)
	cin>>a[i];
	for(i=0;i<s.length();i++)
	{
		//cout<<a[s[i]-'a']<<"*"<<(i+1)<<endl;
		sum=sum+(a[s[i]-'a']*(i+1));
	}
	pos=max_element(a,a+27)-a;
	//cout<<pos<<endl;
	for(j=i;j<s.length()+k;j++)
	{
		//cout<<a[pos]<<"*"<<(j+1)<<endl;
		sum=sum+(a[pos]*(j+1));
	}
	
	cout<<sum;
}

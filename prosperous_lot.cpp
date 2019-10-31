#include<bits/stdc++.h>
using namespace std;
long long int k,n,i,j,x;
string s;
int main()
{
	cin>>k;
	if(k<=36)
	{
		for(i=0;i<k/2;i++)
		s+='8';
		
		if(k%2==1)
		s=s+'4';
		
		if(s.length()<=18)
		cout<<s;
		else
		cout<<-1;
		return 0;
	}
	else
	cout<<-1;
	
	
}

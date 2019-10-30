#include<bits/stdc++.h>
using namespace std;
long int n,i,j,a[205];
string s;
int main()
{
	cin>>s;
	
	while(i<s.length())
	{
	
		if(s[i]=='.')
		{
			a[j]=0;
			i++;
		}
		else if(s[i]=='-' && s[i+1]=='.')
		{
			a[j]=1;
			i+=2;
		}
		else if(s[i]=='-' && s[i+1]=='-')
		{
			a[j]=2;;
			i+=2;
		}
		j++;
		
	}
	
	for(i=0;i<j;i++)
	cout<<a[i];
}

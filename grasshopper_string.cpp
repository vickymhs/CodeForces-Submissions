#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	int i,j=1,c=1;
	cin>>a;
	for(i=0;i<=a.length();i++)
	{
		if(a[i]=='A' || a[i]=='E' || a[i]=='I'||a[i]=='O'||a[i]=='U' || a[i]=='Y' || a[i]=='\0')
		{
			j=max(j,c);
			c=1;	
		}
		else
		{
			c++;
		}
	}
	//cout<<a[a.length()];
	cout<<j;
}

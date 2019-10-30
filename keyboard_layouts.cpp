#include<bits/stdc++.h>
using namespace std;
string a,b,c;
int i,j;
char d;
int main()
{
	cin>>a>>b>>c;
	for(i=0;i<c.length();i++)
	{
		d=c[i];
		
		if(!isalpha(d))
		{
		cout<<d;	
		continue;
		}
		
		if(isupper(c[i]))
		d=tolower(c[i]);
		
		
		{
			for(j=0;j<a.length();j++)
			{
				if(a[j]==d)
				break;
			}
			if(isupper(c[i]))
			{
				//cout<<j<<endl;
				d=toupper(b[j]);
				cout<<d;
			}
			else
			cout<<b[j];
		}
	}
}

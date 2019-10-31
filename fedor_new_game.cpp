#include<bits/stdc++.h>
using namespace std;
int n,m,k,i,j,x,d,l,c,cw;
string s[2000],temp;
int main()
{
	cin>>n>>m>>k;
	for(i=0;i<=m;i++)
	{
		cin>>x;
		temp.clear();
		while(x>0)
		{
			d=x%2;
			if(d==0)
			temp+='0';
			else
			temp+='1';
			x=x/2;
		}
		//cout<<temp<<endl;
		s[i]=temp;
		
		for(j=0,l=s[i].length()-1;j<=(s[i].length() -1)/2;j++,l--)
		swap(s[i][j],s[i][l]);
	//	cout<<s[i]<<endl;
	}
	
	/*for(i=0;i<=m;i++)
	{
		cout<<s[i]<<endl;
	}*/
	for(i=0;i<=m;i++)
	{
		for(j=0;j<(n-s[i].length());j++)
		{
			s[i].insert(j, "0");
			j--;
		}
		//cout<<s[i]<<endl;
	}
	for(i=0;i<m;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(s[i][j]!=s[m][j])
			c++;
		}
		//cout<<c<<endl;
		if(c<=k)
		cw++;
	}
	cout<<cw;
}

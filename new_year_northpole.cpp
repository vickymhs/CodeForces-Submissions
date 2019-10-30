#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,s=0,t[1000005],flag=0;
string a[1000005];

int main()
{
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>t[i];
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]=="North")
		{
			s=s+t[i];
			if(s>0) 
			{
				flag=1;
				break;
			}
			/*else 
			{
				if(s==0 && ( a[i]=="East" || a[i]=="West"))
			{
				flag=1;
				break;
			}
			else
			flag=0;
			}*/
		}
		
		else if(a[i]=="South")
		{
			s=s-t[i];
			if(s<-20000) 
			{
				flag=1;
				break;
			}
			/*else 
			{
				if(s==-20000 && ( a[i]=="East" || a[i]=="West"))
			{
				flag=1;
				break;
			}
			else
			flag=0;
			}*/
		}
		
		else if(a[i]=="East"||a[i]=="West")
		{
			if(s==0 || s==-20000)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	if(f
	lag==0 && s==0)
	cout<<"YES";
	else
	cout<<"NO";
}

	#include<bits/stdc++.h>
	using namespace std;
	int n,t,i,j,val,temp;
	string s;
	//string
	
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>t;
		s+='1';
		for(i=0;i<n-1;i++)
			s+='0';
		//cout<<s.length();
		if(n==1)
		{
			if(t==10)
				cout<<-1;
			else
				cout<<t;
			return 0;
		}

		if(t==5||t==10)
			cout<<s;
		else if(t==3||t==6||t==9)
		{
			s[s.length()-1]='8';
			cout<<s;
		}
		else if(t==7)
		{
			j=(s.length()-1)%6;
			if(j==0)
				i=1;
			else if(j==1)
				i=3;
			else if(j==2)
				i=2;
			else if(j==3)
				i=6;
			else if(j==4)
				i=4;
			else if(j==5)
				i=5;

			temp=7-i;
			s[s.length()-1]=temp+'0';
			cout<<s;
		}
		else if(t==2 || t==4 || t==8)
		{
			if(n==2)
				cout<<16;
			else if(n==3)
				cout<<104;
			else
				cout<<s;
		}

		return 0;
	}

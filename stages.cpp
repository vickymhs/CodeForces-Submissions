#include<bits/stdc++.h>
using namespace std;
long long int n,k,i,j,sum=0,f=-1;
string s;
char ch;
int main()
{
	cin>>n>>k;
	cin>>s;
	i=0;
	while(i<26)
	{
		ch='a'+i;
		//cout<<ch<<" ";
		for(j=0;j<s.length();j++)
		{
			f=-1;
			if(k==0)
			{
				break;
			}
			else
			{
				if(s[j]==ch)
				{
					//cout<<j<<endl;
					sum+=i+1;
					k--;
					f=1;
					break;
				}
			}
		}
		if(f==-1)
		i++;
		else
		i+=2;
	}
	if(k==0)
	cout<<sum;
	else
	cout<<-1;
}

	#include<bits/stdc++.h>
	using namespace std;
	int n,k,c[26],i,j,f;
	string s,temp[26],temp1;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>k;
		cin>>s;
		for(i=0;i<26;i++)
		{
			temp1="";
			for(j=0;j<k;j++)
				temp1+='a'+i;
			temp[i]=temp1;
		}
		//for(i=0;i<26;i++)
		//	cout<<temp[i]<<endl;
		i=0;temp1="";
		while(i<s.length())
		{
			f=0;
			temp1=s.substr(i,k);
			//cout<<temp1<<endl;
			for(j=0;j<26;j++)
			{
				if(temp1==temp[j])
				{
					c[j]++;
					f=1;
					break;
				}
			}
			if(f==1)
				i+=k;
			else
				i++;
		}
		/*for(i=0;i<26;i++)
			cout<<c[i]<<" ";
		cout<<endl;*/
		cout<<*max_element(c,c+26);
		return 0;
	}

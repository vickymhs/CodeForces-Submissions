	#include<bits/stdc++.h>
	using namespace std;
	long long int n,i,j,a,b,c,f,s;
	//string 
	//#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		//fastread;
		cin>>n>>a>>b>>c;
		f=1;
		n--;
		s=0;
		while(n>0)
		{
			//cout<<f<<" ";
			if(f==1)  //rabbit
			{
				if(a<b)
				{
					s+=a;
					f=2;
				}
				else
				{
					s+=b;
					f=3;
				}
			}
			else if(f==2)  //owl
			{
				if(a<c)
				{
					s+=a;
					f=1;
				}
				else
				{
					s+=c;
					f=3;
				}
			}
			else if(f==3)
			{
				if(b<c)
				{
					s+=b;
					f=1;
				}
				else
				{
					s+=c;
					f=2;
				}
			}
			n--;
			//cout<<s<<endl;
		}
		cout<<s<<endl;
		return 0;
	}

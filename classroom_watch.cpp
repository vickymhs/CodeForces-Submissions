	#include<bits/stdc++.h>
	using namespace std;
	long long int i,j,c,f,x,y;
	int n;
	//string
	std::vector<long long int> v;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		//cout<<"here";
		cin>>n;
		//cout<<"here";
		//x=log10(n);
		//cout<<x+1;
		//cout<<"here";
		/*for(i=1;i<=9;i++)
		{
			if(i==n)
			{
				cout<<0<<endl;
				exit(0);
			}
		}*/
		for(i=max(1,n-100);i<=n;i++)
		{
			//cout<<"here";
			j=i;
			if(i>n)
				break;
			else
			{long long int s=i;
			//x=log10(j);
			//x++;
			while(j!=0)
			{
				y=j%10;
				s=s+y;
				j=j/10;
			}
			if(s==n)
			{
				//c++;
				v.push_back(i);
				//f++;
			}

			}
		}
		cout<<v.size()<<endl;
		c=v.size();
		for(i=0;i<c;i++)
			cout<<v[i]<<endl;
		return 0;
	}

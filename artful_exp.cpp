	#include<bits/stdc++.h>
	using namespace std;
	long long int n,a[2005],b[2005],x,i,j,c;
	long long int beg,last,mid;
	std::vector<int> v;
	//string
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n;
		for(i=0;i<n;i++)
			{cin>>a[i];
			v.push_back(a[i]);}
		for(i=0;i<n;i++)
			{cin>>b[i];
			v.push_back(b[i]);}
		//cout<<v.size()<<endl;
		sort(v.begin(),v.end());
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				beg=0;
				last=v.size()-1;
				x=a[i]^b[j];
				//cout<<i<<" "<<j<<endl;
				//cout<<"l "<<last<<endl;
				//cout<<"x "<<x<<endl;
				
				while(beg<=last)
				{
					mid=(beg+last)/2;
					//cout<<"beg "<<beg<<" last "<<last<<" mid "<<mid<<endl;
					if(x==v[mid])
						{c++;break;}
					else if(x<v[mid])
						last=mid-1;
					else
						beg=mid+1;
				}
				//cout<<"c "<<c<<endl;
			}
		}
		//cout<<c<<endl;
		if(c%2==0)
			cout<<"Karen\n";
		else
			cout<<"Koyomi\n";
		
		return 0;
	}

	#include<bits/stdc++.h>
	using namespace std;
	long long int i,n,m,j,c;
	//string
	char a[52][52];
	std::vector<char> v;
	#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int main()
	{
		fastread;
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			v.clear();
			for(j=1;j<m;j++)
			{
				v.clear();
				//cout<<a[i][j-1]<<" "<<a[i][j]<<" "<<a[i+1][j-1]<<" "<<a[i+1][j]<<endl;
				v.push_back(a[i][j-1]);
				v.push_back(a[i][j]);
				v.push_back(a[i+1][j-1]);
				v.push_back(a[i+1][j]);
				
				sort(v.begin(),v.end());
				//for(int k=0;k<v.size();k++)
				//	cout<<v[k];
				//cout<<endl;
				if(v[0]=='a' && v[1]=='c' && v[2]=='e' && v[3]=='f')
					c++;
				//v.clear();
			}
			
		}
		cout<<c;
		return 0;
	}

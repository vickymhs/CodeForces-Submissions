#include<bits/stdc++.h>
using namespace std;

int main()
{
	int p[105],n;
	double s=0,y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		s=s+p[i];
	}
	y=s/n;
	cout<<fixed;
	cout<<setprecision(9)<<y;
}

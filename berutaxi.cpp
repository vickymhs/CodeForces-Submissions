#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	long double a,b,x[1005],y[1005],v[1005];
	int i,j,n;
	
	long double m;
	long double t[1005];
	
	cin>>a>>b;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i]>>v[i];
		m=pow(x[i]-a,2)+pow(y[i]-b,2);
	//	cout<<m;
	cout<<fixed;
		t[i]=sqrt(m)/v[i];
		//cout<<t[i];
	}
	cout<<setprecision(15)<<*std::min_element(t,t+n);
}

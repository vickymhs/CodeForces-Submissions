#include<iostream>


using namespace std;

int main()
{
	int a[100],n,i,j,b[5];
	cin>>n;
	b[0]=0;
	b[1]=0;
	b[2]=0;
	for(i=1;i<=n;i++)
	{
		
		cin>>a[i];
		
		if(i%3==1)
		b[0]=b[0]+a[i];
		
		else if(i%3==2)
		b[1]=b[1]+a[i];
		
		else
		b[2]=b[2]+a[i];
	}
	//cout<<b[0]<<b[1]<<b[2];

	if(b[0]>b[1]&&b[0]>b[2])
	cout<<"chest";
	
	else if(b[1]>b[0] && b[1]>b[2])
	cout<<"biceps";
	
	else if(b[2]>b[0]&&b[2]>b[1])
	cout<<"back";
	
	return 0;
	
}

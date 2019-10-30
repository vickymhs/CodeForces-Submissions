#include<iostream>
using namespace std;
int main()
{
	int i,j;
	string a[5];
	for(i=0;i<3;i++)
	{
		//for(j=0;j<3;j++)
		cin>>a[i];
	}
	
	if(a[0][0]==a[2][2] && a[0][1]==a[2][1] && a[0][2]==a[2][0] && a[1][0]==a[1][2])
	cout<<"YES";
	else
	cout<<"NO";
	
}

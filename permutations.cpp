#include<iostream>
using namespace std;
int fact(int x);
int main()
{
	int i,n;
	cin>>n;
	
	if(n%2!=0)
	cout<<-1;
	
	else
	{for (i=1;i<=n;i+=2)
	cout<<i+1<<" "<<i<<" ";
}	}

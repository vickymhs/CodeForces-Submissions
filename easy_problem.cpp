#include <iostream>
using namespace std;

int main() {
	int n,i,a[105],f=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
			f=1;
	}
	if(f==1)
		cout<<"HARD";
	else
		cout<<"EASY";
	return 0;
}

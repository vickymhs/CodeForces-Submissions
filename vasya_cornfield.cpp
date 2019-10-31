#include <iostream>
using namespace std;

int main() {
	int x,y,n,m,d,i,j;
	string yes="YES", no="NO";
	cin>>n>>d>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		if(x-y<=d && x+y>=d && x-y>=(-d) && x+y<=(2*n)-d)
			cout<<yes<<endl;
		else
			cout<<no<<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
long long int n,k,i,c1,c2;
int main()
{
	i=1;
	cin>>n>>k;
	/*while(n>=k)
	{
		if(i%2 !=0)
		{
			n=n-k;c1++;
		}
		else
		{
			n=n-k;c2++;
		}
		i++;
		//cout<<n<<" "<<c1<<" "<<c2<<endl;
	}*/
	
	c1=n/k;
	if(c1%2!=0)
	cout<<"YES";
	else
	cout<<"NO";
}

#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,a[1000005],f=1;

int main()
{
	cin>>n;
	while(n%2==0)
	{
		a[2]++;
		n=n/2;
	}
	for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
           a[i]++;
            n = n/i;
        }
    }
    
    if (n > 2)
        a[n]++;
    
    for(i=0;i<100005;i++)
    {
    	if(a[i])
    	f=f*(a[i]+1);
	}
	cout<<f-1;
}

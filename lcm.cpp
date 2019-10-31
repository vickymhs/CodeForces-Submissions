#include <bits/stdc++.h> 
using namespace std; 
void func(long long n) 
{ 
    long long int count=0,value=1; 
  	vector<long long int>v;
    // count the number of times 2 divides  
    while (!(n%2)) 
	{ 
        n>>=1; // equivalent to n=n/2; 
        count++; 
    } 
  
    // if 2 divides it 
    if (count) 
    {
    	//cout << 2 << "  " << count << endl;
		v.push_back(count);
	}    
  
    // check for all the possible numbers that can  
    // divide it 
    for (long long i=3; i<=sqrt(n); i+=2) 
	{ 
        count=0; 
        while (n%i==0) 
		{ 
            count++; 
            n=n/i; 
        } 
        if (count) 
        {
        	//cout << i << "  " << count << endl; 
        	v.push_back(count);
		}    
    } 
  
    // if n at the end is a prime number. 
    if (n>2) 
    {
    	//cout << n << "  " << 1 << endl;
    	v.push_back(1);
	} 
	for(int i=0;i<v.size();i++)
	{
		value=value*(v[i]+1);
	}
	cout<<value;
} 
  
// driver program to test the above function 
int main() 
{ 
    long long n;
	cin>>n; 
    func(n); 
    return 0; 
} 

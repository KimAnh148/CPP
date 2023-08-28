#include<iostream>
using namespace std;
long long gcd(long long a, long long b)
{
	if(a%b==0)
		return b;
	else
		return gcd(b, a%b);
}
long long lcm(long long a, long long b)
{
	return a*b/gcd(a,b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n, u=1;
		cin>>n;
		for(long long i=1; i<=n; i++)
			u=lcm(u, i);
		cout<<u<<endl;
	}
} 

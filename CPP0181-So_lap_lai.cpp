#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(a%b==0) return b;
	else return gcd(b,a%b);
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a, x, y;
		cin>>a>>x>>y;
		long long k=gcd(x,y);
		for(int i=0; i<k; i++)
			cout<<a;
		cout<<endl;
	}
}

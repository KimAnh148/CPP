#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(a%b==0) return b;
	else return gcd(b, a%b);
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
		long long x, y, z;
		int n;
		cin>>x>>y>>z>>n;
		long long res=lcm(lcm(x,y),z);
		long long dau=pow(10,n-1)/res, cuoi=pow(10,n)/res;
		if(dau<1 && cuoi<1)
		{
			cout<<"-1"<<endl;
			continue;
		}
		if(dau*res<pow(10,n-1))
		{
			dau++;
			cout<<dau*res<<endl;
		}
		else
			cout<<dau*res<<endl;
	}
}


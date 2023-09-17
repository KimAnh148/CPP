#include<bits/stdc++.h>
using namespace std;
int tang(long long n)
{
	while(n && n/10)
	{
		int tmp = n%10;
		n/=10;
		if(tmp<=n%10) return 0;
	}
	return 1;

}
int giam(long long n)
{
	while(n && n/10)
	{
		int tmp=n%10;
		n/=10;
		if(tmp>=n%10) return 0;
	}
	return 1;
}
bool snt(long long n)
{
	for(int i=2; i*i<=n; i++)
		if(n%i==0)
			return false;
	return n>1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, cnt=0;
		cin>>n;
		long long a=pow(10, n-1), b=pow(10, n);
		for(int i=a; i<=b; i++)
			if(tang(i) || giam(i))
				if(snt(i))
					cnt++;
		cout<<cnt<<endl;
	}
}

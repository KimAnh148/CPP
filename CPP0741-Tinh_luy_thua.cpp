#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x, y, p, res=1;
		cin>>x>>y>>p;
		while(y--)
			res=(res*x)%p;
		cout<<res<<endl;
	}
	
}

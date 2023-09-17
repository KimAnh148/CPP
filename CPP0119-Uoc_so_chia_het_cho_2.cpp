#include<bits/stdc++.h>
using namespace std;
int slv(int n)
{
	int cnt=0;
	for(int i=1; i*i<=n; i++)
	{
		if(n%i==0)
		{
			if(i%2==0) cnt++;
			if((n/i)%2==0)	cnt++;
			if(i*i==n && n%2==0) cnt--;
		}
		
	}
	return cnt;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<slv(n)<<endl;
	}
}

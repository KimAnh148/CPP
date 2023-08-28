#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, a, res;
		cin>>n>>x;
		for(int i=0; i<n; i++)
		{
			cin>>a;
			if(a==x) res=i+1;
		}
		cout<<res<<endl;
	}
}

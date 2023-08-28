#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long x;
		map<int,int> a;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			if(x>=0 && x<=n) a[x]++;
		}
		for(int i=0; i<n; i++)
		{
			if(a[i]>0)
				cout<<i<<" ";
			else
				cout<<"-1 ";
		}
		cout<<endl;
	}
}

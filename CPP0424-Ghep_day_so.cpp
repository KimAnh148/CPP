#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k, m;
		cin>>n>>k;
		m=n*k;
		int a[m];
		for(int i=0; i<m; i++)
			cin>>a[i];
		sort(a,a+m);
		for(int i=0; i<m; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

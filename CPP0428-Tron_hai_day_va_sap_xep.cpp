#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, x;
		cin>>n>>m;
		int k=n+m, a[k];
		for(int i=0; i<k; i++)
			cin>>a[i];
		sort(a,a+k);
		for(int i=0; i<k; i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, count0=0;
		cin>>n;
		long long a[n];
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]==0)
				count0++;
			else
				cout<<a[i]<<" ";
		}
		for(int i=0; i<count0; i++)
			cout<<"0 ";
		cout<<endl;
	}
}

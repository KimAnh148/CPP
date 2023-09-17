#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, res=-1;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin>>a[i];
		for(int i=0; i<n-1; i++)
			for(int j=i+1; j<n; j++)
				if(a[j]-a[i]>0)
					res=max(res, a[j]-a[i]);
		cout<<res<<endl;
	}
}

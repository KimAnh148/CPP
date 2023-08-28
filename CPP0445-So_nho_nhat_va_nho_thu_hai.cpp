#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,min1=1e7,min2=1e8;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(min1>a[i]) min1=a[i];
		}
		for(int i=0;i<n;i++)
		{
			if(min2>a[i]&&a[i]>min1) min2=a[i];
		}
		if(min2==1e8) cout<<-1<<endl;
		else cout<<min1<<" "<<min2<<endl;
	}
}

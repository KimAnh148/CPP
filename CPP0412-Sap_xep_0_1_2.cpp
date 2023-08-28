#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, a[3]={0};
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			a[x]++;
		}
		for(int i=0; i<a[0]; i++) cout<<"0 ";
		for(int i=0; i<a[1]; i++) cout<<"1 ";
		for(int i=0; i<a[2]; i++) cout<<"2 ";
		cout<<endl;
	}
}

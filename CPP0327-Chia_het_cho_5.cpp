#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>>n;
		long long sum=0;
		for(int i=0; i<n.size(); i++)
		{
			sum= ((sum*2)+(n[i]-'0'))%5;
		}
		if(sum%5==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}

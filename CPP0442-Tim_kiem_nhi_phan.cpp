#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, a, res=-1;
		cin>>n>>x;
		for(int i=0; i<n; i++)
		{
			cin>>a;
			if(a==x)
				res=1;
		}
		cout<<res<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, a, res=0;
		cin>>n>>x;
		for(int i=0; i<n; i++)
		{
			cin>>a;
			if(a==x && res==0)
				res=i+1;
		}
		if(res==0)
			cout<<"-1\n";
		else
			cout<<res<<endl;
		
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		long long x,y, max=-1e8, min=1e8;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			if(x>max) max=x;
		}
		for(int i=0; i<m; i++)
		{
			cin>>y;
			if(y<min) min=y;
		}
		cout<<min*max<<endl;
		
	}
}


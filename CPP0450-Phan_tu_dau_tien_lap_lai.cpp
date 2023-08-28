#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int x, res=-1;
		map<int,int> a;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			a[x]++;
			if(a[x]==2 && res==-1)
				res=x;
		} 
		cout<<res<<endl;
	}
} 

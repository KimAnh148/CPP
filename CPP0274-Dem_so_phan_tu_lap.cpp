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
		int a[n], res=0;
		map <int, int>b;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			b[a[i]]++;
			if(b[a[i]]==2)
				res+=2;
			else if(b[a[i]]>2)
				res++;
		}
		cout<<res<<endl;
		
	}
}

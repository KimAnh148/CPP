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
		vector <int> a(n, 0);
		while(1)
		{
			int check=0;
			for(int i=0; i<n; i++)
				cout<<a[i];
			cout<<" ";
			for(int i=n-1; i>=0; i--)
			{
				if(a[i]==0)
				{
					check=1;
					a[i]=1;
					for(int j=i+1; j<n; j++)
						a[j]=0;
					break;
				}
			}
			if(check==0) break;
		}
		cout<<endl;
	}
 } 

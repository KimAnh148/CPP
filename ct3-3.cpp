#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	vector <int> b[n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
			b[j].push_back(a[i][j]);
		}
	for(int i=0; i<n; i++)
		sort(b[i].begin(), b[i].end());
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<b[j][i]<<" ";
		cout<<endl;
	}
			
} 

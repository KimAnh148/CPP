#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][3], res=0;
	for(int i=0; i<n; i++)
	{
		int count1=0;
		for(int j=0; j<3; j++)
		{
			cin>>a[i][j];
			if(a[i][j]==1)
				count1++;
		}
		if(count1>(3-count1))
			res++;
	}
	cout<<res;	
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long tgt=0;
	for(int i=1; i<=n; i++)
	{
		long long temp=1;
		for(int j=1; j<=i; j++)
			temp*=j;
		tgt+= temp;
	}
	cout<<tgt;
} 

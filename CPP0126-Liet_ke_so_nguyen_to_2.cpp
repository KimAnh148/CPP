#include<iostream>
using namespace std;
int snt(int n)
{
	if(n<2)
		return 0;
	for(int i=2; i*i<=n; i++)
		if(n%i==0)
			return 0;
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		for(int i=m; i<=n; i++)
			if(snt(i))
				cout<<i<<" ";
		cout<<endl;
	}
}

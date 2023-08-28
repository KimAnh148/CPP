#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long  n;
		cin>>n;
		for(long long  i=2; i*i<=n; i++)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n/=i;
			}
		}
		if(n>1)
			cout<<n<<endl;
		else
			cout<<endl;
	}
}

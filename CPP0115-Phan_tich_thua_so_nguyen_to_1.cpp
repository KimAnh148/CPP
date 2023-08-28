#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		for(int i=2; i*i<=n; i++)
		{
			while(n%i==0)
			{
				n/=i;
				count++;
			}
			if(count>0)
			{
				cout<<i<<" "<<count<<" ";
				count=0;
			}
		}
		if(n>1)
				cout<<n<<" 1";
			cout<<endl;
	}
}

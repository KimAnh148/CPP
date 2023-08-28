#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k, count=0;
		cin>>n>>k;
		for(int i=2; i*i<=n; i++)
		{
			while(n%i==0)
			{
				n/=i;
				count++;
				if(count==k)
				{
					cout<<i<<endl;
					break; 
				}	
			}
			if(count==k)
				break; 
		}
		if(n>1)
		{
			count++;
			if(count==k)
				cout<<n<<endl;
		}
		if(count<k)
			cout<<"-1"<<endl;
	}
}

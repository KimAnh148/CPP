#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, x, res=0;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			cin>>x;
			if(x>res)
				res=x;
		}
		cout<<res<<endl;
	}
}

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
		int n;
		cin>>n;
		int count=0;
		for(int i=2; i<=n/2; i++)
		{
			if(snt(i) && snt(n-i))
			{
				cout<<i<<" "<<n-i<<endl;
				count++;
				break;
			}
		}
		if(count==0)
			cout<<"-1"<<endl;
	}
}

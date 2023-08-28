#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count=0;
	for(int i=2; i*i<=n; i++)
	{
		while(n%i==0)
		{
			count++;
			n/=i;
		}
		if(count>0)
		{
			cout<<i<<" "<<count<<endl;
			count=0;
		}
	}
	if(n>1)
		cout<<n<<" 1";
}

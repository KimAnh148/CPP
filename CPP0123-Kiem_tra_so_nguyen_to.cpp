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
	int n;
	cin>>n;
	if(snt(n))
		cout<<"YES";
	else
		cout<<"NO";
}

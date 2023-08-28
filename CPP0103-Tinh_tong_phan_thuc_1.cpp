#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	double spt=0;
	cin>>n;
	for(int i=1; i<=n; i++)
		spt+=(1.0/i);
	cout<<fixed<<setprecision(4)<<spt;
}

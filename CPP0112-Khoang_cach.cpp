#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double a, b, c, d, res;
		cin>>a>>b>>c>>d;
		res = sqrt((c-a)*(c-a) + (d-b)*(d-b));
		cout<<fixed<<setprecision(4)<<res<<endl;
	}
}

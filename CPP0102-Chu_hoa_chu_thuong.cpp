#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char kitu;
		cin>>kitu;
		if('A'<=kitu && kitu<='Z')
			cout<<char(kitu+32)<<endl;
		else
			cout<<char(kitu-32)<<endl;	
	}
}

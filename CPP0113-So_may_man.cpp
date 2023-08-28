#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int kc=s.size();
		if(s[kc-1]=='6' && s[kc-2]=='8')
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}

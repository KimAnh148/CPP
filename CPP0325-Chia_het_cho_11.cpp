#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int res=0;
		for(int i=0; i<s.size(); i++)
		{
			if(i%2==0)
				res += s[i] - '0';
			else
				res-= s[i] - '0';
		}
		if(res % 11 == 0)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}

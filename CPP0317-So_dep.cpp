#include<bits/stdc++.h>
using namespace std;
string check(string s)
{
	int n=s.size();
	for(int i=0; i<n/2; i++)
		if(s[i] != s[n-i-1] ||(s[i]-'0') % 2 != 0)
			return "NO";
	return "YES";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
}

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
		int a[26]={}, res= s.size();
		for(int i=0; i<s.size(); i++)
			a[s[i]-'a']++;
		for(int i=0; i<26; i++)
			res += a[i]*(a[i]-1)/2;
		cout<<res<<endl;
			
	}
}

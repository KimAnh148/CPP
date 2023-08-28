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
		map<char, int> a;
		for(int i=0; i<s.size(); i++) a[s[i]]++;
		for(int i=0; i<s.size(); i++)
		{
			if(a[s[i]])
			{
				cout<<s[i]<<a[s[i]];
				a[s[i]]=0;
			}
		}
		cout<<endl;
	}
}

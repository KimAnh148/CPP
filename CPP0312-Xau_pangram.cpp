#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int k,c[26]={0}, dem=0;  
		cin>>s>>k;
		for(int i=0; i<s.size();i++)
			c[s[i]-'a']++;
		for(int i=0; i<26; i++)
			if(c[i]==0)
				dem++;
		if(dem<=k)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
}

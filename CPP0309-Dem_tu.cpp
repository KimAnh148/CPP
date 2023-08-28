#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		cin.ignore();
		int count=1;
		for(int i=0; i<s.size(); i++)
		{
			if((s[i]==' '|| s[i]=='\t')&&(s[i+1]>='a' && s[i+1]<='z'))
				count++;
		}
		cout<<count<<endl;
	}
}

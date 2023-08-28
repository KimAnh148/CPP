#include<bits/stdc++.h>
using namespace std;
string vh(string s)
{
	for(int i=0; i<s.size(); i++)
		s[i]= toupper(s[i]);
	return s;
}
string ccd(string s)
{
	s[0]=toupper(s[0]);
	for(int i=1; i<s.size(); i++)
		s[i]= tolower(s[i]);
	return s;
}
int main()
{
	string s;
	getline(cin,s);
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss>>tmp)	v.push_back(tmp);
	for(int i=0; i<v.size() - 1; i++)
	{
		cout<<ccd(v[i]);
		if(i==v.size() - 2) cout<<", ";
		else cout<<" ";
	}
	
	cout<<vh(v[v.size()-1]);
}

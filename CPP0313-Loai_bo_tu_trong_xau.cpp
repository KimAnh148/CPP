#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s, k;
	getline(cin, s);
	cin>>k;
	stringstream ss(s);
	string word;
	while(ss>>word)
	{
		if(word==k)
			continue;
		cout<<word<<" ";
	}
} 

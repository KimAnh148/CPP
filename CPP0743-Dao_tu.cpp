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
		stringstream ss(s);
		string tmp;
		vector <string> d;
		while(ss>>tmp)
		{
			d.push_back(tmp);
		}
		for(int i=d.size()-1; i>=0; i--)
			cout<<d[i]<<" ";
		cout<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0;
	cin>>n;
	map <string,int> a;
	string s;
	cin.ignore();
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		if(a[s]==0) res++;
		a[s]++;
	}
	cout<<res;
}

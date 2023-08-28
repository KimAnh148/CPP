#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int b[100001]={0};
		for(int i=0; i<a.size(); i++)
			b[a[i]]++;
		for(int i=0; i<a.size(); i++)
		{
			if(b[a[i]]==1)
				cout<<a[i];
		}
		cout<<endl;
	}
}

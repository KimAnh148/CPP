#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; 
		cin>>n;
		cin.ignore();
		string a;
		getline(cin,a);
		int b[10]={0};
		for(int i=0; i<a.size(); i++)
			if(a[i] >= '0' && a[i] <= '9')
				b[a[i]-'0']++;
		for(int i=0; i<=9; i++)
			if(b[i]>0)
				cout<<i<<" ";
		cout<<endl;
	}
}

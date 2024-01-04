#include<bits/stdc++.h>
using namespace std;
int main()
{
		string s;
		cin>>s;
		long long res=0 , rem=0;
		for(int i=0; i<s.size(); i++)
		{
			if(s[i]<'0' || s[i]>'9')
			{
				res= max(res, rem);
				rem=0;
			}
			else
				rem = rem * 10 + s[i] - '0';
		}
		res = max(res, rem);
		cout<<res<<endl;

} 

#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		bool check=true;
		for(int i=0; i<(s.size())/2; i++)
		{
			if(s[i]!= s[s.size()-i-1])
				{
					check= false;
					break;
				}
		}
		if(check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

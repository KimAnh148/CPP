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
		bool check = true;
		for(int i=0; i<s.size()-1; i++)
		{
			if(s[i+1]-s[i] != 1 && s[i]-s[i+1] != 1)
			{
				check=false;
				break;
			}
		}
		if(check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;	
	}
} 

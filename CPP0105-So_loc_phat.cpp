#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string n;
		cin>> n;
		bool check= true;
		for(int i=0; i<n.size(); i++)
		{
			if (n[i] != '0'&& n[i] != '6' && n[i] != '8')
			{
				check = false;
				break;
			}
		}
		if(check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}

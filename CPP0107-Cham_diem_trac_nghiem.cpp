#include<iostream>
#include<iomanip>
using namespace std;
char correct1[15]={'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'},
	correct2[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'} ;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int de;
		cin>>de;
		string s;
		for(int i=0; i<15; i++)
			cin>>s[i];
		double diem=0;
		if(de==101)
		{
			for(int i=0; i<15; i++)
				if(s[i]==correct1[i])
					diem+=(double)10/15;
		} 
		else if(de==102)
		{
			for(int i=0; i<15; i++)
				if(s[i]==correct2[i])
					diem+=(double)10/15;
		}
		cout<<fixed<<setprecision(2)<<diem<<endl;
	}
}

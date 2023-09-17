#include<bits/stdc++.h>
using namespace std;
#define quick() ios_base::sync_with_stdio(false); cin.tie(0);
int snt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return 1;
} 
int main()
{
	quick();
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		int cnt=0;
		for(int i=2; i<=sqrt(n); i++)
			if(snt(i))
				cnt++;
		cout<<cnt<<endl;
	}
}

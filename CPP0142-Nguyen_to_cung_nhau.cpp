#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if(a%b==0) return b;
	else return gcd(b, a%b); 
} 
int snt(int n)
{
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return 0;
	return n>1 ;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, t=0;
		cin>>x;
		for(int i=1; i<=x; i++)
			if(gcd(x, i)==1)
				t++;
		if(snt(t)) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}

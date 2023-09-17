#include<bits/stdc++.h>
using namespace std;
long long fb[100];
void fibo()
{
	fb[0]=0;
	fb[1]=1;
	for(int i=2; i<=92; i++)
		fb[i]=fb[i-1]+fb[i-2]; 
} 
bool check(long long n)
{
	fibo();
	for(int i=0; i<=92; i++)
		if(n==fb[i])
		{
			return true;
			break;
		}
	return false;
}
int main ()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(check(n)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

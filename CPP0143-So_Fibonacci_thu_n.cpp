#include<iostream>
using namespace std;
long long fb[100]; 
void fibo()
{
	fb[0]=0;
	fb[1]=1;
	for(int i=2; i<=92; i++)
		fb[i]=fb[i-1]+fb[i-2];
}
int main()
{
	int t;
	cin>>t;
	fibo();
	while(t--)
	{
		int n;
		cin>>n; 
		cout<<fb[n]<<endl;
	}
}

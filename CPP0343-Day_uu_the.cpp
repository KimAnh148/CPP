#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		int x, sum=0, odd=0, even=0;
		while(scanf("%d", &x) != -1)
		{
			if(x%2==0) even++;
			else odd++;
			sum++;
			char k=getchar();
			if(k=='\n') break;
		}
		if((sum%2==0 && even>odd) || (sum%2!=0 && even<odd)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
				
	}
} 

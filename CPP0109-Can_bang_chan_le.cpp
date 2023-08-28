#include<iostream>
#include<math.h>
using namespace std;
bool socb(int num)
{
	int even=0, odd=0;
	while(num>0)
	{
		int digit=num%10;
		if(digit%2==0)
			even++;
		else
			odd++;
		num/=10;
	}
	return even==odd;
}
void insocb(int n)
{
	int a= pow(10, n-1), b= pow(10, n)-1,hd=0;
	for(int i=a; i<=b; i++)
	{
		if(socb(i))
		{
			if(hd==10)
			{
				cout<<endl;
				hd=0;
			}
			cout<<i<<" ";
			hd++;
		}
	} 
}
int main()
{
	int n;
	cin>>n;
	insocb(n);
}

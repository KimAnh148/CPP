#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(a%b==0)	return b;
	else return gcd(b, a%b); 
} 
struct PhanSo{
	long long tu, mau;
};
void nhap(struct PhanSo &p)
{
	cin>>p.tu>>p.mau;
}
void rutgon(PhanSo &p)
{
	long long x=gcd(p.tu,p.mau);
	p.tu /= x;
	p.mau /= x;
}
void in(PhanSo p)
{
	cout<<p.tu<<"/"<<p.mau;
}
int main() 
{
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}

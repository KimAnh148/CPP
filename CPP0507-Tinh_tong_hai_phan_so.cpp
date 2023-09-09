#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	while(b!=0)
	{
		long long x=a%b;
		a=b;
		b=x;
	}
	return a;
}
long long lcm(long long a, long long b)
{
	return a*b/gcd(a,b);
}
struct PhanSo{
	long long tu, mau;
};
void nhap(PhanSo &p)
{
	cin>>p.tu>>p.mau;
} 
void rutgon(PhanSo &p)
{
	long long x=gcd(p.tu, p.mau);
	p.tu /= x;
	p.mau /=x;
}
PhanSo tong(PhanSo a, PhanSo b)
{
	PhanSo res;
	rutgon(a); rutgon(b);
	long long k=lcm(a.mau, b.mau );
	res.mau=k;
	long long d1=k/a.mau*a.tu;
	long long d2=k/b.mau*b.tu;
	res.tu=d1+d2;
	rutgon(res);
	return res;
}
void in(PhanSo p)
{
	cout<<p.tu<<"/"<<p.mau<<endl;
}
int main() 
{
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}

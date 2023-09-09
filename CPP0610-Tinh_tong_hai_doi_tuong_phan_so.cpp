#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(a%b==0) return b;
	else return gcd(b, a%b);
}
long long lcm(long long a, long long b)
{
	return a*b/gcd(a,b);
}
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long a=0, long long b=1)
		{
			tu=a;
			mau=b;
		}
		void rutgon()
		{
			long long k=gcd(tu, mau);
			tu /= k;
			mau /= k;
		}
		friend istream& operator >> (istream &in, PhanSo &a);
		friend ostream& operator << (ostream &out, PhanSo a);
		friend PhanSo operator + (PhanSo a, PhanSo b)
		{
			PhanSo res(1,1);
			long long mc=lcm(a.mau, b.mau);
			res.tu = mc/a.mau*a.tu + mc/b.mau*b.tu;
			res.mau=mc;
			res.rutgon();
			return res;
		}
};
istream& operator >> (istream &in, PhanSo &a)
{
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator << (ostream &out, PhanSo a)
{
	out<<a.tu<<"/"<<a.mau;
	return out;
}
int main()
{
	PhanSo p(1,1), q(1,1);
	cin>> p >> q;
	cout<< p+q;
	return 0;
}

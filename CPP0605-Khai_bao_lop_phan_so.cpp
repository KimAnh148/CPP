#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
	if(a%b==0) return b;
	else return gcd(b, a%b);
}
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long a, long long b)
		{
			tu=a;
			mau=b;
		}
		friend istream& operator >> (istream &in, PhanSo &a);
		friend ostream& operator << (ostream &out, PhanSo a);
		void rutgon()
		{
			long long tmp=gcd(tu, mau);
			tu /= tmp;
			mau /= tmp;
		}
};
istream& operator >> (istream &in, PhanSo &a)
{
	in>> a.tu>>a.mau;
	return in;
}
ostream& operator <<(ostream &out, PhanSo a)
{
	out<<a.tu<<"/"<<a.mau<<endl;
	return out;
}
int main() 
{
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

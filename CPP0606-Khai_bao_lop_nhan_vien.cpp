#include<bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string name, sex, bth, add, tax, date;
	public:
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator << (ostream &out, NhanVien a);
};
istream& operator >> (istream &in, NhanVien &a)
{
	getline(in, a.name);
	in>>a.sex>>a.bth;
	in.ignore();
	getline(in, a.add);
	cin>>a.tax>>a.date;
	return in;
}
ostream& operator <<(ostream &out, NhanVien a)
{
	out<<"00001 "<<a.name<<" "<<a.sex<<" "<<a.bth<<" "<<a.add<<" "<<a.tax<<" "<<a.date;
	return out;
}
int main()
{
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}

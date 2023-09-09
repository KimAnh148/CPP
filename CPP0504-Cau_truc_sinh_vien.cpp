#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string name, gr, date, msv;
	float gpa;
};
void nhap(SinhVien &a)
{
	getline(cin,a.name);
	cin>>a.gr>>a.date;
	cin>>a.gpa;
	a.msv="B20DCCN001";
	string tmp="";
	if(a.date[1] == '/') a.date = "0"+ a.date;
	if(a.date[4] == '/') a.date.insert(3,"0");
}
void in(SinhVien a)
{
	cout<<a.msv<<" "<<a.name<<" "<<a.gr<<" "<<a.date<<" "<<fixed<<setprecision(2)<<a.gpa<<endl;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}

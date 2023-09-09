#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string name, sex, date, add, tax, date1;
}; 
void nhap(NhanVien &a)
{
	getline(cin, a.name);
	cin>>a.sex>>a.date;
	cin.ignore();
	getline(cin, a.add);
	cin>>a.tax>>a.date1;
}
void in(NhanVien a)
{
	cout<<"00001 "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.add<<" "<<a.tax<<" "<<a.date1<<endl;
}
int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
struct SinhVien{
	string name, gr, bth;
	float gpa;
};
void nhapThongTinSV(SinhVien &a)
{
	getline(cin, a.name);
	cin>>a.gr>>a.bth>>a.gpa;
	if(a.bth[1]=='/')
		a.bth="0"+a.bth;
	if(a.bth[4]=='/')
		a.bth.insert(3,"0");
}
void inThongTinSV(SinhVien a)
{
	cout<<"N20DCCN001	"<<a.name<<"	"<<a.gr<<"	"<<a.bth<<"	";
	cout<<fixed<<setprecision(2)<<a.gpa;
}
int main()
{
	struct SinhVien a;
	nhapThongTinSV(a);
	inThongTinSV(a);
	return 0;
 } 

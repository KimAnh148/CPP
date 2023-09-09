#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv, name, gr, bth;
		float gpa;
	public:
		void nhap();
		void xuat();
};
void SinhVien::nhap()
{
	getline(cin, name);
	cin>>gr>>bth;
	cin>>gpa;
	if(bth[1]=='/')
		bth="0"+bth;
	if(bth[4]=='/')
		bth.insert(3,"0");
	msv="B20DCCN001";
}
void SinhVien::xuat()
{
	cout<<msv<<" "<<name<<" "<<gr<<" "<<bth<<" ";
	printf("%.2f", gpa);
}
int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}

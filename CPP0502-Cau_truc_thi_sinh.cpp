#include<bits/stdc++.h> 
using namespace std;
struct ThiSinh
{
	string name, date;
	double x, y, z;
};
void nhap(ThiSinh &a)
{
	getline(cin, a.name);
	cin>>a.date;
	cin>>a.x>>a.y>>a.z;
}
void in(ThiSinh a)
{
	cout<<a.name<<" "<<a.date<<" ";
	double sum = a.x + a.y + a.z;
	cout<<fixed<<setprecision(1)<<sum;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

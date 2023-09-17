#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string name, gr, bth;
		float gpa;
	public:
		SinhVien()
		{
			name="";
			gr="";
			bth="";
			gpa=0;
		}
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};
istream& operator >> (istream &in, SinhVien &a)
{
	getline(in, a.name);
	in>>a.gr>>a.bth>>a.gpa;
	if(a.bth[1]=='/') a.bth="0"+a.bth;
	if(a.bth[4]=='/') a.bth.insert(3,"0");
	string res="";
	stringstream ss(a.name);
	string tmp;
	while(ss>>tmp)
	{
		res+=toupper(tmp[0]);
		for(int i=1; i<tmp.size(); i++)
			res+=tolower(tmp[i]);
		res+=" ";
	}
	res.erase(res.length()-1);
	a.name = res;
	return in;
}
ostream& operator << (ostream &out, SinhVien a)
{
	out<<"B20DCCN001 "<<a.name<<" "<<a.gr<<" "<<a.bth<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out; 
}
int main()
{
	SinhVien a;
	cin>>a;
	cout<<a;
	return 0;
}

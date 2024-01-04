#include<bits/stdc++.h>
using namespace std;
class Customer{
	public:
		int id;
		double discount;
		string name;
		int invoiceId;
		double amount;
};
class Invoice{
	public:
		int id;
		Customer customer;
		double amount ;
};
bool cmp(Invoice &a, Invoice &b)
{
	if(a.amount==b.amount)
		return a.customer.id<b.customer.id;
	return a.amount>b.amount;
}
int main()
{
	int n;
	cin>>n;
	vector <Customer> customers(n);
	vector <Invoice> invoices(n);
	for(int i=0; i<n; i++)
	{
		string tmp;
		cin>>tmp;
		cin>>customers[i].id;
		cin.ignore();
		getline(cin, customers[i].name);
		cin>>customers[i].discount;
		cin>>customers[i].invoiceId>>customers[i].amount;
		invoices[i].id=customers[i].id;
		invoices[i].customer = customers[i];
		invoices[i].amount=customers[i].amount * (100-customers[i].discount)*0.01;
	}
	sort(invoices.begin(), invoices.end(), cmp);
	for(int i=0; i<n; i++)
	{
		cout<<"Customer ID : "<<invoices[i].customer.id<<endl;
		cout<<"Full Name : "<<invoices[i].customer.name<<endl;
		cout<<"Amount : "<<fixed<<setprecision(2)<<invoices[i].amount<<" $"<<endl;
		cout<<"--------------------"<<endl;	
	}
}

#include<iostream>
using namespace std;

int main()
{
	int x,x1,x2,x3,x4,p1,p2,p3;
	cout<<"\tTOKO MAKMUR"<<endl;
	cout<<"Masukan Jumlah Belanja : Rp.";
	cin>>x;
	if(x>0&&x<=25000)
	{
		cout<<"Diskon 0% (Potongan) : Rp.0"<<endl;
		x1==x;
		cout<<"Jumlah Yang Harus Dibayar : Rp.";
		cout<<x;
	} else if (x>25000&&x<=50000)
	{
		p1=x*0.1;
		x2=x-p1;
		cout<<"Diskon 10% (Potongan) : Rp."<<p1<<endl;
		cout<<"Jumlah Yang Harus Dibayar : Rp.";
		cout<<x2;
	}else if (x>50000&&x<=100000)
	{
		p2=x*0.125;
		x3=x-p2;
		cout<<"Diskon 12.5% (Potongan) : Rp."<<p2<<endl;
		cout<<"Jumlah Yang Harus Dibayar : ";
		cout<<x3;
	}else if (x>100000)
	{
		p3=x*0.15;
		x4=x-p3;
		cout<<"Diskon 15% (Potongan) : Rp."<<p3<<endl;
		cout<<"Jumlah Yang Harus Dibayar : ";
		cout<<x4;
	}
	return 0;
}

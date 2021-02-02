#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int x,x1,x2,x3,x4,p1,p2,p3;
	cout<<"Masukan Jumlah Belanja : Rp.";
	cin>>x;
	switch(x)
	{
		case 0 ... 25000:
		cout<<"Diskon 0% (Potongan) : Rp.0"<<endl;
		x1==x;
		cout<<"Jumlah Yang Harus Dibayar : Rp.";
		cout<<x;break;
		case 25001 ... 50000:
		p1=x*0.1;
		x2=x-p1;
		cout<<"Diskon 10% (Potongan) : Rp."<<p1<<endl;
		cout<<"Jumlah Yang Harus Dibayar : Rp.";
		cout<<x2;break;
		case 50001 ... 100000:
		p2=x*0.125;
		x3=x-p2;
		cout<<"Diskon 12.5% (Potongan) : Rp."<<p2<<endl;
		cout<<"Jumlah Yang Harus Dibayar : ";
		cout<<x3;break;
		case 100001 ... 2000000000:
		p3=x*0.15;
		x4=x-p3;
		cout<<"Diskon 15% (Potongan) : Rp."<<p3<<endl;
		cout<<"Jumlah Yang Harus Dibayar : ";
		cout<<x4;break;
		default : 
		system("color 4");
		cout<<"Error!!!";break;
		system("PAUSE");
	}
	return 0;
}

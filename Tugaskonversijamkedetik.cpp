#include<iostream>
#include<windows.h>

using namespace std;
int main()
{
	int j,m,d,td;
	system ("color f0");
	cout<<"\t PENGKONVERSI JAM KE DETIK"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Masukan Jam\t : ";
	cin>>j;
	cout<<"Masukan Menit\t : ";
	cin>>m;
	cout<<"Masukan Detik\t : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	cout<<"Total Detik\t : "<<td;
	

	return 0;
}

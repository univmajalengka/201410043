#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


int detik(int j, int m, int d)
{
	int td;
	
	cout<<"Masukan Waktu"<<endl;
	cout<<"Jam : ";
	cin>>j;
	cout<<"Menit : ";
	cin>>m;
	cout<<"Detik : ";
	cin>>d;
	td=(j*3600)+(m*60)+d;
	
	
	return td;
	
}
int waktu(int td)
{
	int j,m,d,sm;
	cout<<"Masukan Total Detik : "<<endl;
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<"Hasilnya Adalah = "<<j<<" Jam : "<<m<<" Menit : "<<d<<" Detik"<<endl;
	return td;
	
}
void tampil(int show)
{
	cout<<"Hasilnya adalah = ";
	cout<<show;
	cout<<" Detik.";
}
void batas()
{
	cout<<"=================================="<<endl;
}

int main()
{
	system("color f0");
	cout<<"\t   TUGAS #7"<<endl;
	cout<<"   Membuat Fungsi Dan Prosedur"<<endl;
	cout<<"\t Konversi Waktu"<<endl;
	batas();
	
	int td,w,a, x, y, z;
	td=detik(x,y,z);
	tampil(td);
	cout<<endl;
	batas();
	w=waktu(a);
	
	
	return 0;
}

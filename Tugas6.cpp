#include<iostream>
#include<windows.h>
#include<conio.h>

using namespace std;
int main()
{
	int j1,m1,d1,j2,m2,d2,j3,m3,d3,sm3,td1,td2,td3;
	system ("color f0");
	
	cout<<"\t \t PROGRAM BILLING"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"Masukan Waktu Pertama :"<<endl;
	cout<<"Jam : ";
	cin>>j1;
	cout<<"Menit : ";
	cin>>m1;
	cout<<"Detik : ";
	cin>>d1;
	cout<<"Masukan Waktu Terakhir :"<<endl;
	cout<<"Jam : ";
	cin>>j2;
	cout<<"Menit : ";
	cin>>m2;
	cout<<"Detik : ";
	cin>>d2;
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;
	td3=td2-td1;
	j3=td3/3600;
	sm3=td3%3600;
	m3=sm3/60;
	d3=sm3%60;
	cout<<"Total Waktu Yang Dipakai Adalah : ";
	cout<<j3<<"Jam:"<<m3<<"Menit:"<<d3<<"Detik"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"\t\t TERIMA KASIH";
	
	getch();
	return 0;
}

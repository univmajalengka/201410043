#include<iostream>
#include<windows.h>

using namespace std;
int main()
{
	int j,m,d,td,sm;
	system ("color f0");
	cout<<"\t PENGKONVERSI DETIK KE JAM:MENIT:DETIK"<<endl;
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Masukan Total Detik\t : ";
	cin>>td;
	j=td/3600;
	sm=td%3600;
	m=sm/60;
	d=sm%60;
	cout<<endl;
	cout<<"   >>"<<j<<"Jam:"<<m<<"Menit:"<<d<<"Detik"<<"<<";
	

	return 0;
}

#include<iostream>
#include<windows.h>
#include<iomanip>
 using namespace std;
 const float persentunjangan = 0.2,
 			 persenpajak = 0.15;

 void batas() {
 	cout<<"----------------------------------"<<endl;
 }

 int main()
 {
 	system ("color f0");
 	cout<<"  PROGRAM PENGHITUNG GAJI BERSIH"<<endl;
 	batas();
 	string namakaryawan;
 	float gajibersih, gajipokok, pajak, tunjangan;
 	cout<<"Masukan Nama Karyawan : ";
 	getline(cin,namakaryawan);
 	cout<<"Masukan Gaji Pokok : Rp. ";
 	cin>>gajipokok;
 	tunjangan = gajipokok * persentunjangan;
 	pajak = gajipokok * persenpajak;
 	gajibersih = gajipokok + tunjangan - pajak;
 	batas();
 	cout<<"Nama Karyawan : "<<namakaryawan<<endl;
 	cout<<setprecision(0);
 	cout<<fixed;
	cout<<"Gaji Bersih : Rp. "<<gajibersih<<endl;
 
 	
 	return 0;
 }

#include<iostream>
using namespace std;
int main()
{
	cout<<"\tKALKULATOR SEDERHANA"<<endl;
	cout<<"silahkan pakai dengan baik dan benar"<<endl;
	cout<<"1. pertambahan \t\t\t 3. perkalian"<<endl;
	cout<<"2. pengurangan \t\t\t 4. pembagian"<<endl;
	cout<<"\t      5. Sisa Hasil Bagi"<<endl;
	cout<<"_____________________________________________"<<endl;
	int a,b,c,menu;
	float d,e,f;
	cin>>menu;
	if(menu==1){
		cout<<"Operasi Pertambahan"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>a;
		cout<<"+"<<endl;
		cin>>b;
		c=a+b;
		cout<<"Hasilnya Adalah :"<<endl;
		cout<<c;
	}else if(menu==2){
		cout<<"Operasi Pengurangan"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>a;
		cout<<"-"<<endl;
		cin>>b;
		c=a-b;
		cout<<"Hasilnya Adalah :"<<endl;
		cout<<c;
	}else if(menu==3){
		cout<<"Operasi Perkalian"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>a;
		cout<<"X"<<endl;
		cin>>b;
		c=a*b;
		cout<<"Hasilnya Adalah :"<<endl;
		cout<<c;
	}else if(menu==4){
		cout<<"Operasi Pembagian"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>d;
		cout<<"/"<<endl;
		cin>>e;
		f=d/e;
		cout<<"Hasilnya Adalah :"<<endl;
		cout<<f;
	}else if(menu==5){
		cout<<"Operasi Sisa Hasil Bagi"<<endl;
		cout<<"Masukan Angka :"<<endl;
		cin>>a;
		cout<<"/"<<endl;
		cin>>b;
		c=a%b;
		cout<<"Sisa Dari Pembagian Tersebut Adalah :"<<endl;
		cout<<c;
	}else{
		
		cout<<"sayang sekali menu tidak ada :("<<endl;
		cout<<"Masukan Angka Yang Benar"<<endl;
	}
	
	return false;
}

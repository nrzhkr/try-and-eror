#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
	
	int angka_1,angka_2, pil;
	float hasil;
	string operasi;
	
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Akar Pangkat 2"<<endl;
	cout<<"3. Inverse Tangen"<<endl;
	cout<<"4. Cosinus"<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	if(pil==1){
	cout<<"Masukan Bilangan pertama : ";
	cin>>angka_1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>angka_2;
	
	hasil=angka_1+angka_2;
	}
	
	if (pil==2){
	cout<<"Masukan Bilangan : ";
	cin>>angka_1;
	
	hasil=sqrt(angka_1);
	}
	
	if (pil==3){
	cout<<"Masukan Bilangan : ";
	cin>>angka_1;
	
	hasil=atan(angka_1);
	}

	if (pil==4){
	cout<<"Masukan Bilangan : ";
	cin>>angka_1;
	
	hasil=cos(angka_1);
	}
	
	cout<<" Nilai Keluaran =   "<<hasil<<endl;
	
	
}
	
	

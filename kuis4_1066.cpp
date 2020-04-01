//Nama : Muhammad Farkhan Syafii
//NIM  : 19.12.1066
//Kelas: 19-S1SI-02

#include <iostream>
#define phi 3.14

using namespace std;

main(){
	 system("cls");
	 int pilih;
	 cout<<"\t\tSelamat Datang\n"<<endl;
	 cout<<"1. Mencari Luas dan Keliling Bangundatar"<<endl;
	 cout<<"2. Menghitung Nilai\n"<<endl;
	 
	 cout <<"Masukkan Pilihan = ";
	 cin>>pilih;
	 system("cls");
	 
switch (pilih)
{
case 1:
/*--2--*/
		int kode;
		float luas,keliling;
		
		cout <<"\tPilih Bangundatar"<<endl;
		cout <<"1. Lingkaran"<<endl;
		cout <<"2. Segitiga"<<endl;
		cout <<"3. Persegi\n"<<endl;
		
		cout <<"Masukkan Pilihan = ";
		cin>>kode;
		system("cls");
		
		switch(kode){
			case 1:
					float r;
					
					cout<<"Masukan Nilai Jari-Jari : ";
					cin>>r;
					
					luas = phi*r*r;
					keliling = phi*2*r;
					
					cout<<"\nLuas Lingkaran : "<<luas<<endl;
					cout<<"keliling Lingkaran : "<<keliling<<endl;
					break;
					
			case 2:
					float alas,tinggi,sisi1,sisi2,sisi3;
					
					cout<<"Masukan Nilai Alas : ";
					cin>>alas;
					cout<<"Masukan Nilai Tinggi : ";
					cin>>tinggi;
					/*--4--*/
					cout<<"Masukan Nilai sisi A : ";
					cin>>sisi1;
					cout<<"Masukan Nilai sisi B : ";
					cin>>sisi2;
					cout<<"Masukan Nilai sisi C : ";
					cin>>sisi3;
					
					luas = 0.5*alas*tinggi;
					keliling = sisi1+sisi2+sisi3;
					
					cout<<"\nLuas Segitiga : "<<luas<<endl;
					cout<<"keliling Segitiga : "<<keliling<<endl;
					break;
			case 3:	
			/*--5--*/
					float sisi, keliling;
					
					cout<<"Masukan Nilai Sisi : ";
					cin>>sisi;
					
					luas = sisi*sisi;
					/*--6--*/
					keliling = 4*sisi;
					
					cout<<"\nLuas Persegi : "<<luas<<endl;
					cout<<"keliling Persegi : "<<keliling<<endl;
					break;
			default:	
			/*--7--*/
					cout<<"Inputan Salah";
					break;
		}
		break;
case 2:
		double nilaitugas , nilaiUTS , nilaiUAS , nilaiakhir;
		
		cout<<"Masukkan Nilai Tugas = "; cin>>nilaitugas ;
		cout<<"Masukkan Nilai UTS = "; cin>>nilaiUTS ;
		cout<<"Masukkan Nilai UAS = "; cin>>nilaiUAS ;
		nilaiakhir= (nilaitugas+nilaiUTS+nilaiUAS)/3;
		
		if 	(nilaiakhir >80){
			cout<<"Nilai Anda adalah A yaitu = "<<nilaiakhir;
		}
		else if (nilaiakhir > 60){
			cout<<"Nilai Anda adalah B yaitu = "<<nilaiakhir;
		}
		else if (nilaiakhir > 40){
			cout<<"Nilai Anda adalah C yaitu = "<<nilaiakhir;
		}
		else if (nilaiakhir > 20){
			cout<<"Nilai Anda adalah D yaitu = "<<nilaiakhir;
		}
		else if (nilaiakhir > 0){
			cout<<"Nilai Anda adalah E yaitu = "<<nilaiakhir;
		}else{
		/*--9--*/
			cout<<"Nilai Anda Salah Silahkan Cek kembali\n";
		}
		break;
default:
/*--10--*/
		cout<<"Inputan Error";
		break;
}
return 0;
}

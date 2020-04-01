#include <iostream>

using namespace std;

main(){
	float umur_pertama, umur_kedua, jumlah_umur, selisih_umur;
	
	cout<<"Input jumlah umur pertama dan kedua"<<endl;
	cin>>jumlah_umur;
	cout<<"Input selisih umur pertama dan kedua"<<endl;
	cin>>selisih_umur;
	
	umur_pertama = (jumlah_umur+selisih_umur)*0.5;
	umur_kedua = jumlah_umur-umur_pertama;
	
	cout<<"umur pertama:"<<umur_pertama<<endl;
	cout<<"umur sisi:"<<umur_kedua<<endl;

	return 0;
}

#include <iostream>

using namespace std;

main(){
	float sasa, sisi, jumlah, selisih;
	
	jumlah	= 10;
	selisih	= 5;
	
	sasa = (jumlah+selisih)*0.5;
	sisi = jumlah-sasa;
	
	cout<<"umur sasa:"<<sasa<<endl;
	cout<<"umur sisi:"<<sisi<<endl;

	return 0;
}
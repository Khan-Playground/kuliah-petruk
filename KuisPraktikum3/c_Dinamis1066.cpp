#include <iostream>
#define kecepatan 150

using namespace std;

main(){
	float waktu, jarak;
	
	cout<<"Masukkan waktu:"<<endl;
	cin>>waktu;
	jarak = kecepatan*waktu;
	
	cout<<"\nJarak \t:"<<(jarak/1000)<<"\t KM";
	
	return 0;
}

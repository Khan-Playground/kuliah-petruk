#include <iostream>
#define kecepatan 150

using namespace std;

main(){
	float waktu, jarak;
	
	waktu = 40;
	jarak = kecepatan*waktu;
	
	cout<<"\nJarak \t:"<<(jarak/1000)<<"\t KM";
	
	return 0;
}

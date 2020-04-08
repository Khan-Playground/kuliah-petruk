/*
//
Muhammad Farkhan Syafii
19.12.1066
*/

#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int n, f, l, m;
	
	cout<<"Masukkan batas awal\t= ";
	cin>>f;
	cout<<"Masukkan batas akhir\t= ";
	cin>>l;
	cout<<"Masukkan kelipatan\t= ";
	cin>>m;
	
	if(f < l){
		cout<<"[ ";
		for(n=f; n<=l; n++){
			if(n%m == 0){
				cout<<" "<<n<<" ";
			}
		}
		cout<<" ]";
	}else{
		cout<<"[ ";
		for(n=9; n>=3; n--){
			if(n%m == 0){
				cout<<" "<<n<<" ";
			}
		}
		cout<<" ]";
	}
	
	getch();
}

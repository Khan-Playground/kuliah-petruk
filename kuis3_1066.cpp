#include <iostream>

using namespace std;

main(){
	int	nilai, bulan, pilihan;
	
	cout<<"Pilih aksi yang diinginkan"<<endl;
	cout<<"1. Konversi nilai"<<endl;
	cout<<"2. Menampilkan nama bulan"<<endl<<endl;
	cout<<"Pilihan anda = ";
	cin>>pilihan;
	
	system("cls");
	
	switch(pilihan){
		case 1:
			cout<<"Konversi nilai"<<endl<<endl;
			cout<<"Maukkan nilai\t:"<<endl;
			cin>>nilai;
			
			if(nilai >= 80 && nilai <= 100){
				cout<<"A"<<endl;
			}else if(nilai >= 60 && nilai <= 79){
				cout<<"B"<<endl;
			}else if(nilai >= 0 && nilai <= 59){
				cout<<"C"<<endl;
			}else{
				cout<<"Nilai yang dimasukkan salah"<<endl;
			}
			break;
		case 2:
			cout<<"======================================="<<endl;
			cout<<"Menampilkan dan memilih nama-nama bulan"<<endl<<endl;
			cout<<"Inputkan angka bulan\t:"<<endl;
			cin>>bulan;
			switch(bulan){
				case 1:
					cout<<"Januari";
					break;
					case 2:
						cout<<"Februari";
						break;
						case 3:
							cout<<"Maret";
							break;
							case 4:
								cout<<"April";
								break;
								case 5:
										cout<<"Mei";
										break;
										case 6:
											cout<<"Juni";
											break;
											case 7:
												cout<<"Juli";
												break;
												case 8:
													cout<<"Agustus";
													break;
													case 9:
														cout<<"September";
														break;
														case 10:
																cout<<"Oktober";
																break;
																case 11:
																		cout<<"November";
																		break;
																		case 12:
																			cout<<"Desember";
																			break;
																			default:
																				cout<<"Inputan ada yang salah";
			}
			break;
		default:
			cout<<"Inputan salah";
			break;
	}
	return 0;
}

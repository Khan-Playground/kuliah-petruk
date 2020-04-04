#include <iostream>
#include <conio.h>

using namespace std;

main(){
	char a;
	int n=1;
	for(a='A'; a<='Z'; a++){
		cout<<"Data ke-"<<a<<" = "<<n<<endl;
		n++;
	}
	getch();
}

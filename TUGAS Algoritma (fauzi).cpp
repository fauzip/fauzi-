#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main ()
 {
	//Deklarasi variable
	int Bilangan;

//input tampilan
	cout<<" Masukkan Bilangan : "; cin>>Bilangan ;
	cout<<endl;

string message;
message = Bilangan % 2 == 0? "Bilangan Genap" :	
"Bilangan ganjil" ;
cout<<message;

return 0;
}

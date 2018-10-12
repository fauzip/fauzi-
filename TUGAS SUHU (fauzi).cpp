#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main ()
{
	//Deklarasi varible
	int Suhu,NilaiX ;
	
	//input Tampilan
	cout<<" Masukan suhu : " ; cin>>Suhu ;
	cout<<" Masukan Nilai X : " ; cin>>NilaiX ;
	cout<<endl ;
	
	//Perhitungan variable
	if (( Suhu > NilaiX )) cout<<"Suhu Panas" ; 
	
	if (( Suhu <= NilaiX )) cout<<"Suhu Dingin" ;
	
	return 0 ;
}

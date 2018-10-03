#include <iostream>
#include <math.h>
#define maks 100
using namespace std;

main()
{
	//deklarasi variabel
	int i, n;
	float angka[maks], totalangka, totalpangkat, angkakuadrat[maks], totalkuadrat, sd;
	
	cout << "Program Menghitung Standar Deviasi dari sejumlah angka yang dimasukkan"<<endl;
	cout << "\nBerapa buah angka yang anda akan masukkan: ";cin>>n;//input batas angka
	for (i=0; i<n; i++)
	{
		cout << "Masukkan angka ke-" << i+1 << " : ";cin>>angka[i];//input angka
		totalangka = totalangka+angka[i];//hitung total angka
		angkakuadrat[i]=pow(angka[i],2);//proses menghitung angka kuadrat
		totalkuadrat = totalkuadrat+angkakuadrat[i];//proses menghitung total dari angka kuadrat
	}
	totalpangkat = pow(totalangka,2);//proses menghitung total angka yang dikuadratkan
	sd = sqrt((n*totalkuadrat-totalpangkat)/(n*(n-1)));//proses mencari standar deviasi
	cout <<"-----------------------------------------------------------" << endl;
	cout << "Standar deviasi dari angka yang dimasukkan adalah = " << sd << endl;//menampilkan hasil perhitungan standar deviasi
	return 0;
}

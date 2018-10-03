#include <iostream>
#define maks 100
using namespace std;

main()
{
	//deklarasi variabel
	int i, n;
	float angka[maks], totalangka, rata;
	
	cout << "Program Menghitung rata-rata dari sejumlah angka yang dimasukkan"<<endl;
	cout << "\nBerapa buah angka yang anda akan masukkan (max. 100) : ";cin>>n;//input batas angka
	
	for (i=0; i<n; i++)
	{
		cout << "Masukkan angka ke-" << i+1 << " : ";cin>>angka[i];//input angka
		totalangka = totalangka+angka[i];//hitung total angka
	}
	
	rata = totalangka/n;//menghitung rata-rata
	cout <<"-------------------------------------------------------" << endl;
	cout << "Rata-rata dari angka yang dimasukkan adalah = " << rata << endl;//menampilkan hasil perhitungan rata-rata
	return 0;
}

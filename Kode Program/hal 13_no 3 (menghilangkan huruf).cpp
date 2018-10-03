#include <iostream>
#include <string.h>
#define maks 100
using namespace std;

main()
{
	//deklarasi variabel
    char kata[maks];
    int i,j,k;
    
    cout<<"Program Menampilkan kata yang akan berkurang satu tiap barisnya"<<endl;
    cout<<"Masukkan sebuah kata    : "; cin>>kata;//input kata
    cout<<"--------------------------------------------------"<<endl;
    i=strlen(kata);//proses menghitung dan menyimpan panjang karakter pada suatu string
    i--;//decrement nilai dari variabel i
    cout<<"Here We Go (Snap!) :"<<endl;
    //proses mengurangi satu persatu karakter pada kata yang diinput
	for(j=i;j>=0;j--)
    {
    	for(k=0;k<=i;k++) {cout<<kata[k];}
       	cout << endl;
       	i--;
    }
    return 0;
}

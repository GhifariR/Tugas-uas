#include <iostream>
using namespace std;
 int main() {
	cout << "     PROGRAM PERALATAN OLAHRAGA     "<<endl;
	cout << "================================="<<endl;


	int harga, jumlah,total, kembalian,jumbayar;
	string input, kode;
	
 while {
 
	cout << "Peralatan Yang Tersedia          |"<<endl;
	cout << "001 - Bola Volly - Rp.100.000    |"<<endl;
	cout << "002 - Bola Futsal - Rp.110.000   |"<<endl;
	cout << "003 - Bola Basket - Rp. 170.000  |"<<endl;
	cout << "004 - Raket Badminton- Rp.80.000 |"<<endl;
	cout << "================================="<<endl;

}
	cout << "Peralatan Yang Di Pesan  :";
	cin >> kode;
	cout << "Jumlah Beli   :";
	cin >> jumlah;

	if (kode == "001") {
		cout << "Bola Volly";
		harga = 100000;
	} else if (kode == "002") {
		cout << "Bola Futsal";
		harga == 11000;
	} else if (kode == "003") {
		cout << "Bola Basket";
		harga = 170000;
	} else if (kode == "004") {
		cout << "Raket Badminton";
		harga = 80000;
	}

	else {
		cout << "Peralatan yang dipilih tidak tersedia"<<endl;
	}

	cout << endl;

	{
		cout << "============================"<<endl;
		cout << "Harga Semua Yang Di Pesan   |"<<endl;
		cout << "============================"<<endl;
		cout << "Harga      :"<<harga<<endl;
		cout << "Jumlah     :"<<jumlah<<endl;

		total = harga * jumlah;

		cout << "Total     :"<<total<<endl;
		cout << "Uang Bayar :  ";
		cin >> jumbayar;

		kembalian = jumbayar - total;
		cout << "Uang Kembalian   :"<<kembalian<<endl;

		cout << "============================"<<endl;
	}



}

#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {
	return p * l;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}

float Luaslingkaran(float r) {
	return 3.14 * r * r;
}

int main() {
	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;
	bool menu;
	menu = true;
	system("cls");
	while (menu == true) {
		cout << "\n\n=================" << endl;
		cout << "=====M E N U=====" << endl;
		cout << "=================" << endl;
		cout << "1. Luas Persegi Panjang" << endl;
		cout << "2. Luas Segitiga" << endl;
		cout << "3. Luas Lingkaran" << endl;
		cout << "4. EXIT" << endl;
		cout << "\npilihan (1/2/3/4) : ";
		cin >> pilihan;

		switch (pilihan) {
		case 1:
			cout << "masukkan panjangnya = ";
			cin >> panjang;
			cout << "masukkan lebarnya = ";
			cin >> lebar;
			cout << "\nLuas Persegi Panjang = " << Luaspersegipanjang(panjang, lebar);
			break;
		case 2:
			cout << "masukkan alasnya = ";
			cin >> alas;
			cout << "masukkan tingginya = ";
			cin >> tinggi;
			cout << "\nLuas Segitiga = " << Luassegitiga(alas, tinggi);
			break;
		case 3:
			cout << "masukkan jari-jarinya = ";
			cin >> jejari;
			cout << "\nLuas lingkaran = " << Luaslingkaran(jejari);
			break;
		case 4:
			menu = false;
			break;
		default:
			cout << "pilihan salah !!";
			break;
		}
	}
}
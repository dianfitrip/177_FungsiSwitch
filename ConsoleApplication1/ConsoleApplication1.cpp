#include <iostream>
using namespace std;

int bilangan1, bilangan2;

int penjumlahan(int a, int b)
{
	return a + b; 
}

int pengurangan(int a, int b)
{
	return a - b;
}

int perkalian(int a, int b)
{
	return a * b;
}

float pembagian(int a, int b)
{
	return a / b;
}

void inputdata()
{
	cout << "\nMasukkan bilangan pertama : ";
	cin >> bilangan1;
	cout << "Masukkan bilangan kedua : ";
	cin >> bilangan2;
}

int main()
{
	int pilihan;
	do
	{
		system("CLS");
		cout << "Menu Kalkulator sederhana" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. pengurangan" << endl;
		cout << "3. Perkalian" << endl;
		cout << "4. Pembagian" << endl;
		cout << "5. keluar" << endl;
		cout << "Masukkan pilihan: ";
		cin >> pilihan;

		
	}
}
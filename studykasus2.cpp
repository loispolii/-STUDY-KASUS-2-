#include <iostream>
#include <conio.h>
#include <fstream>
#include <math.h>
using namespace std;

class rumahmakan
{
	friend istream& operator>>(istream&, rumahmakan&);
	
public :
	void jarak();
	void potongan();
	void jumlahharga();
	void tampilan();

private: 
	int jumlah,harga,diskon,beli,total,menu,porsi,jrk,hgjrk;
};

void rumahmakan::jumlahharga()
{
	int menu;
	
	cout << "=========================\n";
	cout << "||    DAFTAR HARGA     ||\n";
	cout << "-------------------------\n";
	cout << "||1. Ayprek : 21000    ||\n";
	cout << "||2. aygor  : 17000    ||\n";
	cout << "||3. cumgor : 20000    ||\n";
	cout << "||4. aybak  : 25000    ||\n";
	cout << "=========================\n";
	cout<<"Masukan menu : ";cin>>menu;

	if (menu == 1)
	{
		cout << "Berapa banyak porsi yang dibeli -> ";	cin >> beli;
		cout << "Harga satuan menu -> "; cin>>harga;
			jumlah = beli * harga;
		cout << "Harga yang harus dibayar = " << jumlah;
	}
	else if (menu == 2)
	{
		cout << "Berapa banyak porsi yang dibeli -> "; cin >> beli;
		cout << "Harga satuan menu -> "; cin>>harga;
			jumlah = beli * harga;
		cout << "Harga yang harus dibayar = " << jumlah;
	}
	else if (menu == 3)
	{
		cout << "Berapa banyak porsi yang dibeli -> "; cin >> beli;
		cout << "Harga satuan menu -> "; cin>>harga;
			jumlah = beli * harga;
		cout << "Harga yang harus dibayar = " << jumlah;
	}
	else if (menu == 4)
	{
        cout << "Berapa banyak porsi yang dibeli -> "; cin >> beli;
		cout << "Harga satuan menu -> "; cin>>harga;
			jumlah = beli * harga;
		cout << "Harga yang harus dibayar = " << jumlah;
	}
	cout<<endl;
}

void rumahmakan::jarak()
{
	cout << "Masukkan jarak rumah kamu : "; cin>>jrk;
	
	if (jrk <= 3)
	{
		hgjrk = 15000;
			if ( (jumlah > 50000) && (jumlah < 150000) )
			{
				hgjrk = 10000;
    		}
	
    		else if (jumlah > 150000)
    		{
    			hgjrk = 7000;
			}
	}
	
	else if (jrk > 3)
	{
		hgjrk = 25000;
			if ( (jumlah > 50000) && (jumlah < 150000))
			{
				hgjrk = 20000;
			}
			else if (jumlah > 150000)
			{
				hgjrk = 17000;
			}
	}
}

void rumahmakan::potongan()
{
	cout << "----Selamat Anda Mendapatkan Potongan----" << endl;
	
	if ( (jumlah > 50000) && (jumlah < 150000))
	{
		diskon = jumlah * 15/100;
		cout << "Potongan : " << diskon;
	}
	
	else if (jumlah > 150000)
	{
		diskon = jumlah *35/100;
		cout << "Potongan : " << diskon;
	}
}

void rumahmakan::tampilan()
{
    ofstream hsl;
	hsl.open("struct.txt", ios::out);
	
	hsl << "=========================\n";
	hsl << "||    DAFTAR HARGA     ||\n";
	hsl << "-------------------------\n";
	hsl << "||1. Ayprek : 21000    ||\n";
	hsl << "||2. aygor  : 17000    ||\n";
	hsl << "||3. cumgor : 20000    ||\n";
	hsl << "||4. aybak  : 25000    ||\n";
	hsl << "=========================\n";
	hsl << "\nBerapa banyak porsi yang dibeli -> " <<beli;
	hsl << "\nHarga satuan menu -> " <<harga;
	hsl << "\nHarga yang harus dibayar = " << jumlah;
	hsl << "\nBerapa jarak rumah kamu : " << jrk;
	hsl << "\n----Selamat Anda Mendapatkan Potongan----" <<endl;
	hsl << "Potongan : " <<diskon;
}

	
int main ()
{
	rumahmakan x;
	x.jumlahharga();
	x.jarak();
	x.potongan();
	x.tampilan();
}





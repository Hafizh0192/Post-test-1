#include <iostream>
using namespace std;

int main(){
    std ::string nama;
	std ::string jumlah;
	std ::string lama;
	std ::string sukuBunga;
	
	std ::cout << "Nama anda : "; getline(cin,nama);
	std ::cout << "jumlah pinjaman : "; std ::cin >> jumlah;
	std ::cout << "lama pinjaman : "; std ::cin >> lama;
	std ::cout << "Suku Bunga : "; std::cin>> sukuBunga;
	
	cout << "Nama anda : " << nama << endl;
	cout << "Nama jumlah : Rp. " <<jumlah << endl;
	cout << "lama pinjaman : " << lama << " tahun" << endl;
	cout << "Suku Bunga : " << sukuBunga << " %" << endl;
	


 // komen : ctrl + /(?)
 
 // fikri alhafizh > cin \n > getline
 
 // string a, b;
 
 //cout << "a : *;cin >> a;
 //cin.ignore(1,*\n*);
 //cout << "b 1 *;getline(cin,b); || > getline menangkap input sampai bertemu dengan \n (fikri alhafizh\n)
 //cout << a << * * << b;
 
  	}

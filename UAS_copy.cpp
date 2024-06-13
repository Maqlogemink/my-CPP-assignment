#include <iostream>
using namespace std;

class pembelian {
	public:
		double uang_makanan, uang_minuman, uang_total, pajak;
		virtual void transaksi(){
			cout << "Selamat datang di supermarket Dave!\n\n";
		}
};

class makanan : public pembelian {
	public:
		void transaksi() {
			cout << "Silahkan masukkan nominal makanan anda!: Rp";
			cin >> uang_makanan;
		}
};

class minuman : public pembelian {
	public:
		void transaksi() {
			cout << "\nSilahkan masukkan nominal minuman anda!: Rp";
			cin >> uang_minuman;
		}
};

class hitung : public pembelian {
	public:
		double uang1, uang2;
		makanan ma;
		minuman mi;
		pembelian pe;
		
		void transaksi(){
			pe.transaksi();
			ma.transaksi();
			mi.transaksi();
			
			pe.uang_total = ma.uang_makanan + mi.uang_minuman;
			
			if (pe.uang_total >= 500000){
				pe.pajak = pe.uang_total * 0.03;
			}
			else{
				pe.pajak = 0;
			}
			
			uang1 = pe.uang_total;
			uang2 = pe.pajak;
		};
};

int main(){
	pembelian* pe;
	hitung h;
	
	pe = &h;
	pe -> transaksi();
	
	double subtotal_belanja = h.uang1;
	double total_pajak = h.uang2;
	double total_belanja = subtotal_belanja + total_pajak;
	
	cout << "\n\nBaiklah, ini dia perhitungannya:\n";
	cout << "Subtotal belanja anda adalah:	Rp";
	cout << subtotal_belanja;
	cout << "\nPajak pembelanjaan anda adalah:	Rp";
	cout << total_pajak;
	cout << "\nTotal belanja anda (setelah pajak) adalah:	Rp";
	cout << total_belanja;
	cout << "\n\nTerima kash telah berbelanja!";
}

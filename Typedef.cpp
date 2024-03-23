# include <iostream>
# include <vector >
using namespace std;
using bil_bulat = int;
using abjad = std::string;
using desimal = float;
using kondisi = bool;

int main () {
    //Typedef = kata kunci yg digunakan untuk membuat nama tambahan untuk
    //          tipe data tambahan. Nama pemanggil baru untuk tipe data yang sudah ada 
    //          berguna untuk keterbacaan dan mengurangi Typo (salah ketik)

    kondisi pertama = true;
    kondisi kedua = false;

    cout << pertama or kedua << '\n';

    cout << pertama and kedua << '\n';

    bil_bulat panjang = 20;
    bil_bulat lebar = 87 ;
    cout <<"Luas persegi panjang = "<<panjang * lebar << endl;
    cout <<"Keliling dari persegi panjang = "<<2*panjang + 2*lebar << endl;

    abjad jalan = "Soekarno Hatta";
    cout << jalan ;



    return 0;





}
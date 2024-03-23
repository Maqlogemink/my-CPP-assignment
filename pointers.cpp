# include <iostream>
using namespace std;


/*

                                POINTERS
adalah variabel yang menyimpan alamat memori dan nilai yang disimpan oleh memori tersebut

sebuah pointer dapat mengambil tipe data yang sama dan dibuat dengan * operator.
alamat dari variabel yang kalian tandai ditandai oleh pointer




*/
int main(){
// contoh 

    string buah_buahan = "nanas";
    string* tanaman = &buah_buahan;

    // output menghasilkan nilai dari buah - buahan 
    cout << buah_buahan << endl;

    // output menghasilkan alamat memori dari buah - buahan 
    cout << &buah_buahan << endl;

    // output mengakses alamat memori dari buah - buahan dan output nilai dari buah - buahan
    cout << *tanaman << endl; 

    // mengubah nilai dari pointer 
    *tanaman = "Mangga";

    // output mencetak nilai baru dari pointer(mangga)
    cout << *tanaman << endl;

    // output mencetak nilai baru untuk variabel buah - buahan (mangga)
    cout << buah_buahan << '\n';


    
    return 0;
}
# include <iostream>
using namespace std;

int main() {
    // Array digunakan untuk menyimpan banyak nilai pada satu variabel
    // untuk mendeklarasikan sebuah array, defenisikan tipe variabel, lalu dari array tsb diikuti oleh kurung siku dan rincikan banyak elemen yang akan disimpan
    // Contoh :

    string mobil [5] = {"toyota","honda","mitsubishi","suzuki","hyundai","nissan"};
    int angka_ganjil[5] = {1,3,5,7,9};

    // Mengakses element didalam sebuah array 
    // mengakses element pada array dengan memanggil nomor index kurung siku []
    // Contoh :
    string mobil [5] = {"toyota","honda","mitsubishi","suzuki","hyundai"};
    cout << mobil[2]<< endl; // outputnya adalah "mitsubishi"

    // Mengubah Element pada Array 
    // Contoh :
    string mobil [5] = {"toyota","honda","mitsubishi","suzuki","hyundai"};
    mobil[1] ="chevrolet";
    cout << mobil[1]; // element "honda" diganti dengan "chevrolet"

    // Looping pada sebuah Array 
    // Contoh :
    string mobil [5] = {"toyota","honda","mitsubishi","suzuki","hyundai"};
    for(int x = 0; x < 5; x++){
        cout << mobil[x] <<'\n';   
    }

    // for-each loop 
    int angka_ganjil[5] = {1,3,5,7,9};
    for(int n : angka_ganjil){
        cout << n << '\n';

    }

    // menampilkan panjang element pada array
    int angka_ganjil[5] = {1,3,5,7,9};
    cout <<sizeof(angka_ganjil) << endl;

    // melakukan perulangan pada array dengan sizeof()
    int angka_genap[7] = {2,4,6,8,10,12,14};
    for(int i = 0; i < sizeof(angka_genap); i++){
        cout << angka_genap[i] << endl;
    }

    // atau bisa juga ditulis seperti ini 
    int angka_genap[7] = {2,4,6,8,10,12,14};
    for(int i : angka_genap){
        cout << i << endl;
    }



    
}
# include <iostream>
using namespace std;
/*

FUNGSI ADALAH SEBUAH SINTAKS YANG MEMUDAHKAN PROGRAMMER UNTUK MEMPERSINGKAT WAKTU UNTUK MENULIS KODE

DENGAN ADANYA FUNGSI SEORANG PROGRAMMER TIDAK HARUS MENULIS ULANG / MENGCOPY KODE SECARA BERULANG 

PEMAKAIAN FUNGSI HANYA DIPANGGIL SESUAI NAMA DARI FUNGSI TSB 

CONTOH :

void data_mahasiswa();




*/
void hitung (){
    int a , b ;  // deklarasikan variabel integer a dan b 

    cout << "Masukkan angka pertama : "<< endl; 
    cin >> a; // input data ke variabel a 
    cout << "Masukkan angka kedua : "<< endl;
    cin >> b; // input data ke variabel b 
    cout << "Hasilnya adalah : "<< a + b << endl;
}

int main (){

    char tanggapan; // deklarasi variabel tanggapan 
    while(true){ // Selama input dari variabel tanggapan sama dengan 'y', program didalamnya akan terus berulang
        cout <<"Selamat Datang"<< endl;
        hitung(); // pemanggilan fungsi hitung 
        cout <<"Hitung lagi ? (y/t) "<<endl;
        cin >> tanggapan; // input data ke varribel tanggapan 
        if(tanggapan != 'y'){// jika tanggapan tidak sama dengan 'y', program berhenti.
            break;
        }
    }

    return 0;

}



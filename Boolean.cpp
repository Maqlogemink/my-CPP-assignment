# include <iostream>
# include <string>
using namespace std;


int main () {

    /*
    Variabel boolean dideklarasikan dengan keyword bool 
    dan hanya menampilkan nilai true atau false 
    */
    int p = 20;
    int q = 30;

    /*
    Ekspersi boolean mengembalikan nilai boolean antara 1(true)
    atau 0(false).

    ini sangat berguna untuk membuat logika dalam program dan menemukan jawaban.

    Kalian juga bisa menggunakan operator komparasi seperti :
    lebih dari ( > ) , kurang dari (<) sama dengan (==) dll.
    untuk mengetehui sebuah statement benar atau salah.

    
    
    */

    cout << (p < q) << '\n';
    cout << (p > q) << '\n';

    

    // contoh program 
    // program pertama 
    int umur ;
    int batas_umur = 21;
    cout << "Masukkan umur anda sekarang" << '\n';
    cin >> umur ;

    if (umur < batas_umur){
        cout << "Anda tidak cukup umur untuk mabuk" << '\n';
    }
    else {
        cout << "Anda diizinkan untu mabuk" << '\n';
    }


    

    
    return 0;

}
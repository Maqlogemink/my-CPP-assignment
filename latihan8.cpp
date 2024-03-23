#include <iostream>
#include <string.h>
using namespace std;

   
void klub_bola(){
    string nama;
    int size; //deklarasi untuk ukuran dari array yang mau diinput
    char tanggapan; // user bisa memilih apakah program berulang atau tidak

    cout << "Silahkan masukkan jumlah data yang mau di input: (Kurang dari 11)" << endl;
    cin >> size; // banyak nama yang ingin diinput 

    while (true){ // selama kondisi terpenuhi, program terus berulang 

        if (size <= 11 && size >= 1){ // Program berjalan jika variabel size lebih dari sama dengan 1 sampai kurang dari sama dengan 11 

            for(int i = 0; i < size; i++){ //Looping untuk input data
                cout << "Masukkan nama pemain bola ke - " << i + 1 <<" : ";
                cin >> nama[i];
            }
            for(int i = 0; i < size; i++){ // Looping untuk menampilkan data yang diinput 
                cout << "Nama pemain bola ke - " << i + 1 <<" : ";
                cout << nama[i] << endl;
            }
        }   
        else { // Jika variabel size lebih dari 11 atau kurang dari 1, program berhenti.
            cout << "Invalid !!" << endl;
            break;
        }

        cout << "Kembali ke menu utama ? (y/n) : "; cin >> tanggapan; // input dari varibel tanggapan 

        if (tanggapan != 'y' ){ // Jika varibel tanggapan tidak sama dengan 'y' program berhenti. 
            break;
        }

    }

}
    

int main(){
    

    cout <<"=====PROGRAM TRANSFER PEMAIN BOLA 2023===== \n"; // Judul Program
    klub_bola(); // pemanggilan fungsi 

    

    

    
    





}
#include <iostream>
#include <string.h>
using namespace std;

   
void klub_bola(){
    string nama[11];
    int size; //deklarasi untuk ukuran dari array yang mau diinput
    char tanggapan;

    cout << "Silahkan masukkan jumlah data yang mau di input: (Kurang dari 11)" << endl;
    cin >> size; 

    while (true){

        if (size <= 11 && size >= 1){

            for(int i = 0; i < size; i++){ //Looping untuk input data
                cout << "Masukkan nama pemain bola ke - " << i + 1 <<" : ";
                cin >> nama[i];
            }
            for(int i = 0; i < size; i++){
                cout << "Nama pemain bola ke - " << i + 1 <<" : ";
                cout << nama[i] << endl;
            }
        }   
        else {
            cout << "Invalid !!" << endl;
            break;
        }

        cout << "Kembali ke menu utama ? (y/n) : "; cin >> tanggapan;

        if (tanggapan != 'y' ){
            break;
        }

    }

}
    

int main(){
    
    klub_bola();

    

    

    
    





}
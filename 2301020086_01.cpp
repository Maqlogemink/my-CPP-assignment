# include <iostream>
# include <iomanip>
# include <conio.h>
using namespace std;

int main() {
    char ulang; // deklarasikan variabel ulang untuk mengulang program
    int umur, batas_usia, selisih_umur,i; // deklarasikan variabel penentu 
    
    do{
        string nama; // deklarasikan variabel nama 
        cout <<"==========Program Giveaway===========\n"; // judul program 
        cout <<"Masukkan Nama Anda : "<< endl;
        getline(cin,nama);// input nama user 
        cout << "Masukkan Umur Anda : "<< endl;
        cin >> umur; // input umur user 
        batas_usia = 21; // batas usia yang diberikan giveaway
        selisih_umur = umur - batas_usia; //  selisih umur penentu seberapa banyak output dicetak 


        if(umur >= batas_usia){ // jika umur user lebih dari batas usia maka ia mendapatkan hadiah
            for(i = 1; i<= selisih_umur; i++){// program berulang tergantung selisih dari batas usia dengan umur user
                cout <<"Anda Mendapatkan Uang Tunai Sebesar Rp.1.000.000";// output jika mendapat hadiah 
                cout << endl;
            }
        }
        else { // jika umur user kurang dari batas usia maka ia tidak mendapatkan hadiah
            cout << nama <<"Umur anda masih kurang : "<< (batas_usia - umur) <<" tahun "<<endl; // output jika tidak mendapatkan hadiah
        }
    cout <<"Kembali Ke Menu Utama  ? (y/n) :"; cin >> ulang; // program berulang disini, jika user memilih 'y' atau 'Y' maka program berulang ke awal
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
    getch();
        


}
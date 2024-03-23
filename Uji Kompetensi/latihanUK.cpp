#include<iostream>
#include<conio.h>
//Library untuk operasi file
#include<fstream>

using namespace std;

int main(){
    //Deklarasi file
    fstream file ;
    //Buka file csv sesuai namanya dengan fungsi open()
    file.open("dataMhs.csv");
    //Variabel untuk menyimpan nilai perbaris dari file csv
    string output,nim,nama;
    //Baca file cvs menggunakan fungsi geline()
    while(getline(file,output)){
        //Substring fungsinya untuk mengambil sebagian dari isi string
        //Parameternya butuh indeks mulai dan panjangnya
        nim = output.substr( 0 , output.find(";") ) ;
        nama = output.substr( output.find(";")+1 );
        cout << "\nNIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
    }
    //Jangan lupa tutup file yg telah selesai digunakan
    file.close();

    return 0;
}
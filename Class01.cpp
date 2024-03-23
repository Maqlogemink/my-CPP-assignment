# include <iostream>
using namespace std;


class Daspro{       // CLASS
    public:         // Penunjuk akses dari attribute
        long long int  NIM;    // Attribute (variable int)
        string nama_mhs;       // Attribute (variable string)
        float nilai_mhs;       // Attribute (variable float)
};

int main(){

    Daspro data_mhs1;// Membuat Object dari Daspro

    // Mengakses attribute dan memasukkan nilai ke attribute
    data_mhs1.nama_mhs = "Fadli Aidin";
    data_mhs1.nilai_mhs = 3,25;
    data_mhs1.NIM = 2301020086;

    // Mencetak nilai dari attribute
    cout << data_mhs1.nama_mhs << endl;
    cout << data_mhs1.nilai_mhs << endl;
    cout << data_mhs1.NIM << endl;

    return 0;

}
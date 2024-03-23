# include <iostream>
using namespace std;

int main(){

    /*
    Structures adalah cara untuk mengelompokkan 
    beberapa variabel kedalam satu tempat. 

    Setiap variabel yang didalam structures disebut 
    anggota Structure.

    Tidak seperti array, structure bisa terdapat banyak tipe data. */

    // contoh 

    // deklarasi variabel didalam struct
    struct data_mahasiswa{

        string nama_mahasiswa;
        int nomor_induk;
        float nilai_matkul;
    
    }mhs1,mhs2,mhs3;



    // memasukkan nilai dari variabel didalam struct 

    // input data mahasiswa ke - 1
    cout <<"masukkan nama mahasiswa : "; getline(cin,mhs1.nama_mahasiswa);
    cout <<"masukkan nomor induk mahasiswa : ";cin >>mhs1.nomor_induk;
    cout <<"masukkan nilai matakuliah : "; cin >> mhs1.nilai_matkul;
    
    // input data mahasiswa ke - 2
    cout <<"masukkan nama mahasiswa : "; getline(cin,mhs2.nama_mahasiswa);
    cout <<"masukkan nomor induk mahasiswa : ";cin >>mhs2.nomor_induk;
    cout <<"masukkan nilai matakuliah : "; cin >> mhs2.nilai_matkul;
    
    // input data mahasiswa ke - 3
    cout <<"masukkan nama mahasiswa : "; getline(cin,mhs3.nama_mahasiswa);
    cout <<"masukkan nomor induk mahasiswa : ";cin >>mhs3.nomor_induk;
    cout <<"masukkan nilai matakuliah : "; cin >> mhs3.nilai_matkul;



    
    
    
    
    
    */
}
# include <iostream>
# include <string>
# include <vector>

using namespace std; 

/* Enkapsulasi 

Enkapsulasi adalah konsep pada PBO yang mengacu pada pembungkus
data bersama dengan metode yang beroperasi pada data tersebut 
ke dalam sebuah unit tunggal atau kelas. 

Ini adalah prinsip penting pada PBO yang bertujuan 
untuk menyembunyikan detail implementasi dari dunia luar.

Pada enkapsulasi hanya method - method yang didefenisikan di dalam kelas yang memiliki akses langsung ke data,
sedangkan kode di luar kelas hanya dapat berinteraksi dengan data melalui 
method - method publik yang didefenisikan.



*/


class Karyawan{
private: // pada c++, semua attribute atau method yang tidak didefenisikan jangkauannya maka bersifat private secara dafault
    string nama; // attribute atau method yang bersifat private hanya bisa diakses atau dimofikasi di dalam class itu sendiri 
    string jabatan; 
    int umur; 
    double gaji; 
    string jenis_kelamin;
public: // semua attribute atau method yang bersifat public, bisa diakses di luar class dengan membuat object
    void input_nama(string NAMA){
        nama = NAMA;
    }
    string tampil_nama(){
        return nama;
    }
    void input_jabatan(string JABATAN){
        jabatan = JABATAN;
    }
    string tampil_jabatan(){
        return jabatan;
    }
    void input_umur(int UMUR){
        if(UMUR >= 18){
            umur = UMUR;
        }    
    }
    int tampil_umur(){
        return umur;
    }
    void input_gaji(double GAJI){
        gaji = GAJI;
    }
    double tampil_gaji(){
        return gaji;
    }
    void input_gender(string gender ){
        jenis_kelamin = gender;
    }
    string tampil_gender(){
        if(jenis_kelamin == "L" || jenis_kelamin == "l"){
            return "Laki - laki";
        }
        else if(jenis_kelamin == "P" || jenis_kelamin == "p"){
            return "Perempuan";
        }
        else{
            return "Invalid !!";
        }        
    }

};

int main(){
    Karyawan data_diri; // Deklarasikan object dari Karyawan  
   


    data_diri.input_nama("Fadli Aidin"); // Object memanggil method untuk input data diri karyawan 
    data_diri.input_jabatan("Junior Programmer");
    data_diri.input_umur(15);
    data_diri.input_gaji(2.3000000);
    data_diri.input_gender("L");


    // Menampilkan Data Karyawan dengan method dengan kembalian 
    cout << data_diri.tampil_nama() << " | "<< data_diri.tampil_jabatan() <<" | "<<data_diri.tampil_umur() <<" | "<< data_diri.tampil_gaji() <<" | "<< data_diri.tampil_gender();





    
    

}
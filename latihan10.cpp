# include <iostream>
# include <string>
using namespace std;

class Karyawan{
private: // pada c++, semua attribute atau method yang tidak didefenisikan jangkauannya maka bersifat private secara dafault
    string nama; // attribute atau method yang bersifat private hanya bisa diakses atau dimofikasi di dalam class itu sendiri 
    string jabatan; 
    int umur; 
    double gaji; 
    string jenis_kelamin;
public: // semua attribute atau method yang bersifat public, bisa diakses di luar class dengan membuat object
    void input_datadiri(string NAMA, string JABATAN, int UMUR, double GAJI, char GENDER){
      nama = NAMA;
      jabatan = JABATAN; 
      umur = UMUR;
      gaji = GAJI; 
      jenis_kelamin = GENDER;
    }

    string tampil_nama(){
        return nama;
    }
    string tampil_jabatan(){
        return jabatan;
    }
    int tampil_umur(){
        return umur;
    }
    double tampil_gaji(){
        return gaji;
    }
    string tampil_gender(){
      if(jenis_kelamin == "l" || jenis_kelamin == "L"){
        return "Laki - laki";
      } 
      else if(jenis_kelamin == "p" || jenis_kelamin == "P"){
        return "Perempuan";
      }
      else{
        return "Invalid !! ";
      }
    }

};

int main(){
    Karyawan data_diri; // Deklarasikan object dari Karyawan  
    data_diri.input_datadiri("Fadli Aidin","Junior Programmer",20,4.5,'L');

    cout << data_diri.tampil_nama() << " | "<< data_diri.tampil_jabatan() <<" | "<<data_diri.tampil_umur() <<" | "<< data_diri.tampil_gaji() <<" | "<< data_diri.tampil_gender();


}

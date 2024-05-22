

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector> 
#include <algorithm> 
#include <string>
#include <cstring>
using namespace std;

class Rumah_Sakit{
protected:
    
    string Nama_rumah_sakit;
    string Alamat_rumah_sakit;

public:

    Rumah_Sakit(string _nama, string _alamat){
        Nama_rumah_sakit = _nama;
        Alamat_rumah_sakit = _alamat;
    }
    
    string get_nama_rmh_skt(){
        return Nama_rumah_sakit;
    }
    
    string get_alamat_rmh_skt(){
        return Alamat_rumah_sakit;
    }
    
   
        
};


class Karyawan:public Rumah_Sakit{

protected :

    vector <string> Nama_karyawan;
    vector <unsigned int> Umur_karyawan;
    vector <string> Jabatan;
    vector <Karyawan> Data_karyawan;
    
public:

    
    Karyawan(string _nama, string _alamat, vector <string> nama , vector <unsigned int> umur, vector <string> jabatan)
    : Rumah_Sakit(_nama,_alamat), Nama_karyawan(nama), Umur_karyawan(umur), Jabatan(jabatan)
    {

    }

     vector <string> get_nama_karyawan() const
     {
        return Nama_karyawan;
    }
    
    vector <unsigned int> get_umur_karyawan() const
    {
        return Umur_karyawan;
    }
    
    vector <string> get_jabatan_karyawan() const
    {
        return Jabatan;
    }



    void input_data_karyawan(Karyawan data_karyawan){
        
        Data_karyawan.push_back(data_karyawan);
    
        
    }
    
  void hapus_data_karyawan(const string& hapus_data){
      
      auto it_nama = find(Nama_karyawan.begin(),Nama_karyawan.end(),hapus_data);
      if (it_nama == Nama_karyawan.end()){
        return;
      }
      
      size_t indeks = distance(Nama_karyawan.begin(), it_nama);

      Nama_karyawan.erase(it_nama);
      Umur_karyawan.erase(Umur_karyawan.begin() + indeks);
      Jabatan.erase(Jabatan.begin() + indeks);
  }  
    void Get_stat_karyawan(){
        
        unsigned int Pensiun = 65;
        auto it_umur = find(Umur_karyawan.begin(),Umur_karyawan.end(),Pensiun);

        size_t indeks = distance(Umur_karyawan.begin(),it_umur);

        if(it_umur == Umur_karyawan.end()){
            return;
        }
        else {
            cout <<Nama_karyawan.at(indeks) <<" sudah pensiun " <<'\n';
        }
    }    

    void Find_data_karyawan(string __find){

        auto it = find(Nama_karyawan.begin(),Nama_karyawan.end(),__find);
        size_t indeks = distance(Nama_karyawan.begin(),it);
        if(it != Nama_karyawan.end()){
            cout << Nama_karyawan.at(indeks) << " Berada dirumah sakit " << Nama_rumah_sakit << " Berumur "
            << Umur_karyawan.at(indeks) << endl;
        }

    }
        
        
        
        
};

class Pasien : public Rumah_Sakit{

    protected : 
        vector <string> Nama_Pasien;
        vector <unsigned int> Umur_Pasien;
        vector <char> Jenis_Kelamin;
        vector <string> Riwayat_Medis;
        vector <Pasien> Data_Pasien;
        
    public :

        Pasien(string _nama, string _alamat, vector <string> &nama, vector <unsigned int> &umur, vector <char> &gender, vector <string> &riwayat)
        : Rumah_Sakit(_nama,_alamat), Nama_Pasien(nama), Umur_Pasien(umur), Jenis_Kelamin(gender), Riwayat_Medis(riwayat)
        {

           

        }

        vector <string> get_nama_pasien() const{
            return Nama_Pasien;
        }
        vector <unsigned int> get_umur_pasien() const{
            return Umur_Pasien;
        }
        vector <char> get_gender_pasien() const{
            return Jenis_Kelamin;
        }
        vector <string> get_riwayat_pasien() const{
            return Riwayat_Medis;
        }

        void input_data_pasien(Pasien data_pasien){
        
            Data_Pasien.push_back(data_pasien);
        
        }

        void Find_data_pasien(string __find){

        auto it = find(Nama_Pasien.begin(),Nama_Pasien.end(),__find);
        size_t indeks = distance(Nama_Pasien.begin(),it);
        if(it != Nama_Pasien.end()){
            cout <<" Nama : " << Nama_Pasien.at(indeks) 
            << " \n Berada dirumah sakit : " << Nama_rumah_sakit
            << " \n Berumur :" << Umur_Pasien.at(indeks) 
            <<"\n Riwayat Medis : "<< Riwayat_Medis.at(indeks) 
            <<"\n Jenis Kelamin : "<< Jenis_Kelamin.at(indeks) << endl;
            }
        }

        void Rawat_inap(string __find){
          auto it = find(Nama_Pasien.begin(),Nama_Pasien.end(),__find);
          size_t indeks = distance(Nama_Pasien.begin(),it);

          if(it != Nama_Pasien.end()){
            if(Umur_Pasien.at(indeks) > 55 && (Riwayat_Medis.at(indeks) == "Stroke" || Riwayat_Medis.at(indeks) == "Diabetes")){
                cout <<Nama_Pasien.at(indeks) <<" Wajib menginap " << endl;
            }
            if(Riwayat_Medis.at(indeks) == "Kecelakaan"){
                cout <<Nama_Pasien.at(indeks) <<" Wajib menginap " << endl;

          }
        }
    }

    
    




};
    
    


int main(){
    
    vector <string> Nama_Pegawai ={"Agus","Hadi","Mulyadi"};
    vector <unsigned int> Umur_Pegawai = {23,65,21};
    vector <string> Jabatan = {"Operator Radiologi","Apoteker","Satpam"};
    
    Karyawan pegawai_awal_bros("Awal_bros","Jalan Gajah Mada",Nama_Pegawai,Umur_Pegawai,Jabatan);
    pegawai_awal_bros.input_data_karyawan(pegawai_awal_bros);
    pegawai_awal_bros.hapus_data_karyawan("Agus");
    pegawai_awal_bros.Get_stat_karyawan();
    pegawai_awal_bros.Find_data_karyawan("Hadi");


    vector <string> nama_pasien = {"Bagas","Danu","Tania"};
    vector <unsigned int> umur_pasien = {19,65,37};
    vector <char> jenis_kelamin = {'L','L','P'};
    vector <string> penyakit = {"Alergi makanan","Stroke","Kelahiran"};

    Pasien data_pasien_bulan_mei("Awal Bros","Jalan Gajah Mada",nama_pasien,umur_pasien,jenis_kelamin,penyakit);
    data_pasien_bulan_mei.input_data_pasien(data_pasien_bulan_mei);
    data_pasien_bulan_mei.Find_data_pasien("Bagas");
    data_pasien_bulan_mei.Find_data_pasien("Danu");
    data_pasien_bulan_mei.Rawat_inap("Tania");
    data_pasien_bulan_mei.Rawat_inap("Danu");

    


    return 0;
}


// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector> 
#include <algorithm> 
#include <string>
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
    //virtual void Get_data_karyawan(){
      //  cout <<"Nama : " << Nama_karyawan << endl;
        //cout<<"Umur : " << Umur_karyawan << endl; 
        //cout<<"Jabatan : " <<Jabatan << endl; 
    //}
        
        
        
        
};
    
    


int main(){
    
    vector <string> Nama_Pegawai ={"Agus","Hadi","Mulyadi"};
    vector <unsigned int> Umur_Pegawai = {23,65,21};
    vector <string> Jabatan = {"Operator Radiologi","Apoteker","Satpam"};
    
    Karyawan pegawai_awal_bros("Awal_bros","Jalan Gajah Mada",Nama_Pegawai,Umur_Pegawai,Jabatan);
    pegawai_awal_bros.input_data_karyawan(pegawai_awal_bros);
    pegawai_awal_bros.hapus_data_karyawan("Agus");
    pegawai_awal_bros.Get_stat_karyawan();

    return 0;
}
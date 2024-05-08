# include <iostream>
# include <vector> 
# include <string>
using namespace std;

// Kelas Induk Universitas 
class Universitas{
    protected :
        string NAMAUNI;

    public:
        // Konstruktor Kelas Universitas
        Universitas(string _nama_)
        : NAMAUNI(_nama_){
        }
        // Enkapsulasi atribut 
        string getNamaUni() const {
            return NAMAUNI;
        }
};

// Kelas turunan Fakultas (turunan dari Universitas)

class Fakultas : public Universitas{
    
    protected :
    
        string NAMAFAKULTAS;
    
    public:
        // Konstruktor Kelas Fakultas 
        Fakultas(string _NamaUni_,string _NamaFakultas_)
        : Universitas(_NamaUni_), NAMAFAKULTAS(_NamaFakultas_){

        }
        
        string getNamaFakultas() const{
            return NAMAFAKULTAS;
        }

};

// Kelas turunan Jurusan (turunan dari fakultas)

class Jurusan : public Fakultas{
    protected:

        string NAMAJURUSAN;
        string TAHUN_ANGKATAN;
        unsigned int BANYAK_MHS;

    public :
        // Konstruktor Kelas Jurusan 
        Jurusan(string _NamaUni_, string _NamaFakultas_, string _NamaJurusan_, string _TahunAngkatan_, unsigned int _BanyakMhs_)
            : Fakultas(_NamaUni_ ,_NamaFakultas_), NAMAJURUSAN(_NamaJurusan_), TAHUN_ANGKATAN(_TahunAngkatan_), BANYAK_MHS(_BanyakMhs_)
        {

        }
        // Enkapsulasi atribut
        string getNamaJurusan() const {
            return NAMAJURUSAN;
        }

        string getTahunAngkatan() const {
            return TAHUN_ANGKATAN;
        }

        int getBanyakMhs() const {
            return BANYAK_MHS;
        }

};


class HimpunanMahasiswa {

    protected : 
        // vector membungkus konstruktor dari kelas jurusan 
        vector <Jurusan> HimpunanMhsJurusan;

    public : 
        // menambahkan konstruktor kedalam vector 
        void tambahHimpunan(Jurusan tambah){
            HimpunanMhsJurusan.push_back(tambah);
        }

        // for - each vector untuk menampilkan
        void tampilkanDataHimpunan() const{
            cout <<"Data Himpunan Mahasiswa Jurusan Se- Indonesia \n";
            cout <<"=============================================\n";
            for(const auto& itr : HimpunanMhsJurusan){
                cout << "Nama Universitas : " << itr.getNamaUni() << endl;
                cout << "Nama Fakultas : " << itr.getNamaFakultas() << endl;
                cout << "Nama Jurusan : " << itr.getNamaJurusan() << endl;
                cout << "Tahun Angkatan : " << itr.getTahunAngkatan() << endl;
                cout << "Jumlah Mahasiswa : "<< itr.getBanyakMhs() << endl;

                cout << endl; 
            }


        }


};



int main() {
    // Objek utama
    HimpunanMahasiswa HimpunanMhsIndonesia;
    // Objek yang menampung data dari user 
    Jurusan jurusan01("UNIVERSITAS MARITIM RAJA ALI HAJI","FAKULTAS TEKNIK","TEKNIK INFORMATIKA","2023",128);
    
    HimpunanMhsIndonesia.tambahHimpunan(jurusan01);
    HimpunanMhsIndonesia.tampilkanDataHimpunan();







}



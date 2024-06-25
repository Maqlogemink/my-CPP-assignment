# ifndef PROJEK_AKHIR
# define PROJEK_AKHIR
# include <string>
using namespace std;

class Perusahaan {
    
    protected :
        string Nama, Alamat, JenisUsaha;
        unsigned int JumlahKaryawan;
        long unsigned int Valuasi;
        
        
        // Getter
        string GetNama () const ;
        string GetAlamat() const ;
        string GetJenisUsaha () const  ;
        unsigned int GetJumlahKaryawan() const ;
        long unsigned int GetValuasi () const  ;
    
    public :
    
        // setter 
        
        string SetNama (string __Nama) ;
        string SetAlamat(string __Alamat) ;
        string SetJenisUsaha (string __Jenis) ;
        unsigned int SetJumlahKaryawan(unsigned int __Jumlah) ;
        long unsigned int SetValuasi (long unsigned int __Valuasi)  ;
        

        
    
    
};


class Department {
    protected :
        string NamaDept;
        unsigned int BanyakAnggota;
        long unsigned int Anggaran ;
    
        // Getter
        string GetNamaDept () const ;
        unsigned int GetBanyakAnggota () const ;
        long unsigned int GetAnggaran () const ;
    public :
        // setter 
        
        string SetNama (string __NamaDept)  ;
        unsigned int SetBanyakAnggota(unsigned int __BanyakAnggota) ;
        long unsigned int SetAnggaran (long unsigned int __Anggaran);
    
};


class Karyawan : public Perusahaan , public Department {
    protected :
            
        string NamaKaryawan, Jabatan; 
        unsigned int Gaji,Umur,LamaBekerja;
        char JenisKelamin;

        // Getter
        string GetNamaKaryawan () const ;
        string GetJabatan() const ;
        unsigned int GetGaji () const ;
        unsigned int GetUmur() const ;
        unsigned int GetLamaBekerja () const ;
        char GetJenisKelamin() const ;
    public: 
        // setter 
        
        string SetNamaKaryawan (string __NamaKaryawan) ;
        string SetJabatan(string __Jabatan) ;
        unsigned int SetGaji (unsigned int __Gaji) ;
        unsigned int SetUmur(unsigned int __Umur) ;
        unsigned int SetLamaBekerja (unsigned int __LamaBekerja);
        char SetJenisKelamin(char __JenisKelamin);
        virtual void Jobdesc() = 0;

            
    
    
};




#endif


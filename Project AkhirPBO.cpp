# include <iostream> 
# include <vector>
using namespace std;

class Perusahaan {
    
    protected :
        string Nama, Alamat, JenisUsaha;
        unsigned int JumlahKaryawan;
        long unsigned int Valuasi;
        
        
    `   // Getter
        string GetNama () const {
            
            return Nama;
        }
        string GetAlamat() const {
            
            return Alamat;
        }
        string GetJenisUsaha () const {
            
            return JenisUsaha;
        }
        
        unsigned int GetJumlahKaryawan() const {
            
            return JumlahKaryawan;
        }
        
        long unsigned int GetValuasi () const {
            
            return Valuasi;
        }
    
    public :
    
        // setter 
        
         string SetNama (string __Nama)  {
            Nama = __Nama;
            return Nama;
        }
        string SetAlamat(string __Alamat)  {
            Alamat = __Alamat;
            return Alamat;
        }
        string SetJenisUsaha (string __Jenis)  {
            JenisUsaha = __Jenis;
            return JenisUsaha;
        }
        
        unsigned int SetJumlahKaryawan(unsigned int __Jumlah)  {
            JumlahKaryawan = __Jumlah;
            return JumlahKaryawan;
        }
        
        long unsigned int SetValuasi (long unsigned int __Valuasi)  {
            Valuasi = __Valuasi;
            return Valuasi;
        }
        
        
        
        
    
    
};


class Department : public Perusahaan {
    protected :
        string NamaDept;
        unsigned int BanyakAnggota;
        long unsigned int Anggaran ;
        
    public :
    
        
        
    
    
    
    
    
    

    
    
    
    
    
};


class Karyawan {
    private:
            
            string NamaKaryawan, Jabatan, 
            unsigned int Gaji,Umur,LamaBekerja;
            char JenisKelamin;
            
    
    
    
};






int main(){
    
    
    
    
    
}

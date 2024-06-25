# include <iostream>
# include "Deklarasi_projek.h"
using namespace std;

// setter perusahaan

string Perusahaan :: SetNama (string __Nama) {
    Nama  = __Nama;
    return Nama;
}

string Perusahaan :: SetAlamat (string __Alamat) {
    Alamat = __Alamat;
    return Alamat;
}

string Perusahaan :: SetJenisUsaha (string __Jenis) {
    JenisUsaha = __Jenis;
    return JenisUsaha;
}

unsigned int Perusahaan :: SetJumlahKaryawan (unsigned __Jumlah) {
    JumlahKaryawan = __Jumlah;
    return JumlahKaryawan;
} 

long unsigned int Perusahaan :: SetValuasi (long unsigned int __Valuasi){
    Valuasi = __Valuasi;
    return Valuasi;
}


    // getter perusahaan

string Perusahaan :: GetNama () const {
    return Nama;
}

string Perusahaan :: GetAlamat () const {
    return Alamat;
}

string Perusahaan :: GetJenisUsaha () const {
    return JenisUsaha;
}

unsigned int Perusahaan :: GetJumlahKaryawan () const {
    return JumlahKaryawan;
}

long unsigned int Perusahaan :: GetValuasi () const {
    return Valuasi;
}

// setter karyawan

string Karyawan :: SetNamaKaryawan (string __NamaKaryawan) {
    NamaKaryawan = __NamaKaryawan;
    return NamaKaryawan;
} 

string Karyawan :: SetJabatan (string __Jabatan) {
    Jabatan = __Jabatan;
    return Jabatan;
} 

unsigned int Karyawan :: SetGaji (unsigned int __Gaji){
    Gaji = __Gaji;
    return Gaji;
}

unsigned int Karyawan :: SetUmur (unsigned int __Umur){
    Umur = __Umur;
    return Umur;
}

unsigned int Karyawan :: SetLamaBekerja (unsigned int __LamaBekerja){
    LamaBekerja = __LamaBekerja;
    return LamaBekerja;
}

char Karyawan ::  SetJenisKelamin (char __JenisKelamin){
    JenisKelamin = __JenisKelamin;
    return JenisKelamin;
}

// getter karyawan

string Karyawan :: GetNamaKaryawan () const {
    return NamaKaryawan;
} 
string Karyawan :: GetJabatan() const {
    return Jabatan;
}
unsigned int Karyawan :: GetGaji () const {
    return Gaji;
}
unsigned int Karyawan :: GetUmur() const {
    return Umur;
}
unsigned int Karyawan :: GetLamaBekerja () const {
    return LamaBekerja;
}
char Karyawan :: GetJenisKelamin() const {
    return JenisKelamin;
} 

// setter department 

string Department :: SetNama (string __NamaDept) {
    NamaDept = __NamaDept;
    return NamaDept;
}

unsigned int  Department :: SetBanyakAnggota (unsigned int __BanyakAnggota){
    BanyakAnggota = __BanyakAnggota;
    return BanyakAnggota;
}

long unsigned int Department :: SetAnggaran (long unsigned int __Anggaran) {
    Anggaran = __Anggaran;
    return Anggaran;
}

// getter department 

string Department :: GetNamaDept () const {
    return NamaDept;
}
unsigned int Department :: GetBanyakAnggota () const {
    return BanyakAnggota;
}
long unsigned int Department :: GetAnggaran () const {
    return Anggaran;
}







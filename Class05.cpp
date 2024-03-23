/*  INHERITENCE
Inheritance adalah sebuah konsep dalam pbo yang memungkinkan sebuah
class mempunyai turunan pada class lainnya. 

kelas induk : kelas yang mewariskan oleh kelas turunan 
kelas turunan : kelas yang diwariskan oleh kelas induk

Inheritance digunakan untuk mengurangi duplikasi kode dan memungkinkan kelas lainnya mengakses properti
dari kelas induknya. 

Mode dari Inheritance 

Mode Publik(public): Jika kita mewariskan sebuah kelas turunan dari sebuah kelas induk yang publik, 
maka anggota publik dari kelas induk akan menjadi publik di kelas turunannya dan anggota yang dilindungi (protected) dari kelas induk
akan menjadi dilindungi (protected) di kelas turunannya.

Mode Dilindungi(protected): Jika kita mewariskan sebuah kelas turunan dari sebuah kelas induk yang dilindungi,
maka baik anggota publik(public) maupun anggota yang dilindungi(protected) dari kelas dasar akan menjadi dilindungi 
di kelas turunannya.

Mode Pribadi(private): Jika kita mewariskan sebuah kelas turunan dari sebuah kelas induk yang pribadi(private), 
maka baik anggota publik(public) maupun anggota yang dilindungi(protected) dari kelas dasar akan menjadi pribadi di kelas turunannya.


// CONTOH 

/* using namespace std;
# include <iostream>
# include <stdio.h>

class A {
public:
    int x;
 
protected:
    int y;
 
private:
    int z;
};
 
class B : public A {
    // x is public
    // y is protected
    // z is not accessible from B
};
 
class C : protected A {
    // x is protected
    // y is protected
    // z is not accessible from C
};
 
class D : private A // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};

*/

// Constructor of derived classes 

/*
Pada kelas turunan terdapat konstruktor, konstruktor pada kelas turunan secara default diwaris dari kelas induknya
Namun kita dapat menambahkan atribut baru pada kelas turunan.

Jika ingin membuat konstruktor pada kelas turunan, maka konstruktor tersebut harus menambahkan
atribut dari konstruktor induknya 

contoh 

class Induk{
    protected:
        String NAMA;
        int USIA;
        Char JENISKELAMIN;
    Induk(nama, usia , jeniskelamin)
        : NAMA(nama), USIA(usia), JENISKELAMIN(jeniskelamin)
    {
        cout <<"Nama : " <<'\n'
        <<"Usia : "<<'\n 
        <<"Jeniskelamin : "<<'\n';
    }
};

Class Turunan : public Induk{
    public: 
        string KEWARGANEGARAAN;
        string AGAMA;
        float TINGGIBADAN;
    Turunan(string nama, int usia, char jeniskelamin, string kewarganegaraan, string agama, float tinggibadan )
        : Induk(nama,usia,jeniskelamin), KEWARGANEGARAAN(kewarganegaraan), AGAMA(agama), TINGGIBADAN(tinggibadan)
    {
        cout <<"Nama : " <<'\n'
        <<"Usia : "<<'\n 
        <<"Jeniskelamin : "<<'\n'
        <<"Kewarganegaraan : "<<'\n'
        <<"Agama : "<<'\n'
        <<"Tinggi badan : "<<" cm "<<'\n';        
    }
};

int main(){

    Turunan datadiri01 = Turunan("Fadli Aidin",20,'L',"Indonesia","Islam",1,73);



    return 0; 
}

*/
# include <iostream> 
using namespace std;

/*
CONSTRUCTOR 

Constructor didalam C++ adalah sebuah method khusus yang otomatis
terpanggil apabila object di dalam class dibuat 

Untuk membuat contructor gunakan nama yang sama dengan class, diikuti dengan tanda kurung () :

*/

// Contoh :

class Kelasku{ // class
    public:    // penanda akses
        Kelasku(){ // Contructor
            cout <<"Ini adalah Constructor"<<endl;
        }
};

/*
Constructor dapat juga memakai parameter seperti function,
yang berguna untuk mengatur nilai untuk attributes.

*/

//Contoh 

class Motor { // Class 
    public:   // Penanda Akses
        string brand;           // attribute
        string TipeMotor;      // attribute
        float maks_kecepatan;   // attribute
        float kap_tangki;       // attribute
        Motor(string a, string b, float c, float d){ // Constructor dengan parameter
            brand = a; 
            TipeMotor = b; 
            maks_kecepatan = c; 
            kap_tangki = d; 
        }
        ~Motor(){ // Destructor adlah method khusus yang otomatis berjalan jika scope sebuah object berakhir
            cout <<"Motor bermerek : "<< brand <<"\n Dengan tipe motor : "<< TipeMotor
            <<"\n Maks kecepatan : "<< maks_kecepatan <<"\n Kapasitas Tangki : "<< kap_tangki;

            cout <<"\n\n";
        }

};

int main(){

    Kelasku Objekku; // membuat object dari Kelasku(memanggil contructor)

    // membuat object dan class motor dan memanggil constructor dengan nilai yang berbeda
    Motor motor01("Honda","Scoopy", 180, 4.2);
    Motor motor02("Yamaha","Nmax", 250, 6);

    
    
    
    
    return 0; 
}
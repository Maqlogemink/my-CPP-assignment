# include <iostream>
# include <stdio.h>
using namespace std;

class Hewan{
    private :
        string nama;
        string warna;
        int panjang;
    
    public:
        void set_data(string nama_hewan, string warna_hewan, int panjang_hewan){
            nama = nama_hewan;
            warna = warna_hewan;
            panjang = panjang_hewan;
        }
    void get_data_hewan(){
        cout <<" | "<< nama <<" | "<< warna <<" | "<< panjang <<" | "<<endl;
    }
};

int main(){
    Hewan hewan[5];

    string NAMA[5] = {"Kucing","Macan","Ikan","Ayam","Kelinci"};
    string WARNA[5] = {"Putih","Kuning Belang","Perak","Hitam Belang","Abu - abu "};
    int PANJANG[5] = {50,150,30,40,20};

    for(int i = 0; i < 5; i++){
        hewan[i].set_data(NAMA[i],WARNA[i],PANJANG[i]);
        cout <<'\n';
    }
    for(int j = 0; j < 5; j++){
        hewan[j].get_data_hewan();
        cout <<'\n';
    }

    
    
    
    
    
    return 0;
}
# include <iostream>
using namespace std;


class PajakPertambahanNilai{
    string NAMABARANG;
    double HARGABARANG;

    public :

    void set_data(string nama, double harga)
    {
        NAMABARANG = nama;
        HARGABARANG = harga; 
       
    }

    long int get_hrgbrg() const {
        
        long int result = HARGABARANG + (HARGABARANG * 0.11);
        return result;
    }

};

int main(){

    PajakPertambahanNilai brg_01;
    brg_01.set_data("Handphone",2500000);
    cout << brg_01.get_hrgbrg();


    return 0;
}



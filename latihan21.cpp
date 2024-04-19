# include <iostream> 
using namespace std;


class diskon_brg{
private :

    string NAMABARANG; 
    double HARGABARANG; 


public :

    void set_data(string nama, double harga){
        NAMABARANG = nama; 
        HARGABARANG = harga;
    }

    string get_nama_brg(){
        return NAMABARANG;
    }

    long int get_hrg_brg() {
        if(HARGABARANG >= 200000){
           return HARGABARANG =- HARGABARANG * 0.2;
           
        }
        else {
            return HARGABARANG;
        }
    }

};

int main(){


    diskon_brg sepatu;
    sepatu.set_data("Patrobas",260000);    
    sepatu.get_nama_brg();
    sepatu.get_hrg_brg();
    
    
}
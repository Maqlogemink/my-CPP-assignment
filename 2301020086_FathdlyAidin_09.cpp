#include <iostream>
using namespace std;

class Model_hewan
{
    public :

    string Nama_hewan, Warna_hewan;
    unsigned int Panjang_hewan;

    void setNama(string __Nama) 
    {
        Nama_hewan = __Nama;
    }

    string getNama() const{
        return Nama_hewan;
    }

    void setWarna(string __Warna) 
    {
        Warna_hewan = __Warna;
    }
    
    string getWarna() const{    
        return Warna_hewan;
    }

    void setPanjang(unsigned int __Panjang) 
    {
        Panjang_hewan = __Panjang;
    }
    
    unsigned int getPanjang() const {   
        return Panjang_hewan;
    }    
};
class Model_barang
{
    public:
        string Nama_barang,Fungsi_barang;
        unsigned int Jumlah_barang;

        void setNama(string __Nama){
            Nama_barang = __Nama;
        }
        string getNama() const{    
            return Nama_barang;
        }

        void setFungsi(string __Fungsi){
            Fungsi_barang = __Fungsi;
        }
        string getFungsi() const{    
            return Fungsi_barang;
        }

        void setJumlah(unsigned int __Jumlah){
            Jumlah_barang = __Jumlah;
        }
        unsigned int getJumlah() const{
            return Jumlah_barang;
        }



};
class View_hewan
{
    public:

        void cetakNama(string __Nama) const
        {
            cout << "Nama hewannya adalah " << __Nama << endl;
            cout << "================================" << endl;
        }

        void cetakSemua(string __Nama, string __Warna, unsigned int __Panjang) const
        {
            cout <<"| Nama : " << __Nama <<'\n';
            cout <<"| Warna : " << __Warna <<'\n';
            cout <<"| Panjang : " << __Panjang <<'\n';
            cout << "================================" << endl;
        }
};
class View_barang
{
    public:
     
     void cetakNama(string __Nama) const
        {
            cout << "Nama Benda adalah " << __Nama << endl;
            cout << "================================" << endl;
        }

    void cetakSemua(string __Nama, string __Fungsi, unsigned int __Jumlah) const
        {
            cout <<"| Nama : " << __Nama <<'\n';
            cout <<"| Fungsi : " << __Fungsi <<'\n';
            cout <<"| Jumlah : " << __Jumlah <<'\n';
            cout << "================================" << endl;
        }

};

class Controller
{
public:
    Controller()
    {
        Model_hewan mhewan;
        mhewan.setNama("Kucing");
        mhewan.setWarna("Putih");
        mhewan.setPanjang(30);
        View_hewan vhewan;
        vhewan.cetakNama(mhewan.getNama());
        vhewan.cetakSemua(mhewan.getNama(), mhewan.getWarna(), mhewan.getPanjang());

        Model_barang mbarang;
        mbarang.setNama("Meja");
        mbarang.setFungsi("Tempat Saji Makanan");
        mbarang.setJumlah(2);
        View_barang vbarang;
        vbarang.cetakNama(mbarang.getNama());
        vbarang.cetakSemua(mbarang.getNama(), mbarang.getFungsi(), mbarang.getJumlah());
    }
};

int main()
{
    Controller kontrol;
}
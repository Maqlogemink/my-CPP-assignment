#include <iostream>
#include <fstream> 
using namespace std;


struct belanja{
    
    string Nama_barang;
    unsigned int Jumlah_barang;
    double Harga_barang;
    double Total_harga;
    double Diskon_belanja = 0.8;



    string GetNamaBarang(){
        return Nama_barang;
    }
    
    unsigned int GetJumlahBarang(){
        return Jumlah_barang;
    }
    
    double GetHargaBarang(){
        return Harga_barang;
    }
    double GetTotalHarga(){
        
        Total_harga = Jumlah_barang * Harga_barang;
        
         if(Total_harga >= 50000 && Total_harga < 100000){
            Total_harga *= Diskon_belanja;
        }
        else if (Total_harga >= 100000){
            double pengurangan  = Total_harga * (Diskon_belanja - 0.64);
            
            Total_harga -= pengurangan;
            
        }
        return Total_harga;
    }
    void Simpan_data_transaksi(){
        fstream Transaksi_toko;
        Transaksi_toko.open("Daftar_Transaksi_Toko.txt", ios::app);

        if(Transaksi_toko.is_open()){
            Transaksi_toko <<"================================="<<'\n';
            Transaksi_toko <<"Nama Barang : "<< GetNamaBarang() <<'\n';
            Transaksi_toko <<"Jumlah Barang : "<< GetJumlahBarang() <<'\n';
            Transaksi_toko <<"Harga Barang : "<< GetHargaBarang() <<'\n';
            Transaksi_toko <<"Total Harga : "<< GetTotalHarga() <<'\n';
            Transaksi_toko <<"================================="<<'\n';


            Transaksi_toko.close();

        }

    }
};

    


int main() {


    char menu_utama;
    belanja *Pemasukan_toko;
    Pemasukan_toko = new belanja;
    
    do{
        
        
        cout << "Masukkan Nama Barang : "; cin >> Pemasukan_toko->Nama_barang ; cin.clear();
        cout <<"Masukkan Harga Barang : "; cin >>Pemasukan_toko->Harga_barang ; cin.clear();
        cout <<"Masukkan Jumlah Barang : " ; cin >> Pemasukan_toko->Jumlah_barang ;cin.clear();
        cout <<"Total Harga: " << Pemasukan_toko->GetTotalHarga() << endl; cin.clear();

        Pemasukan_toko->Simpan_data_transaksi();
       
       
        cout <<"Kembali ke menu utama (y/n) : "; cin >> menu_utama; cin.clear();
        
        cout << endl;
        
    }while(menu_utama == 'Y' || menu_utama == 'y');  
    
        delete Pemasukan_toko;
    
    
    
    
    
    
    
   











    return 0;
}
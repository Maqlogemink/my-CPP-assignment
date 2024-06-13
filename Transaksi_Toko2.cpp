#include <iostream>
#include <fstream> 
using namespace std;

class belanja{
    protected:
        string Nama_barang;
        double Jumlah_barang;
        double Harga_barang;

        string GetNamaBarang(){
            return Nama_barang;
        }

        double GetJumlahBarang(){
            return Jumlah_barang;
        }

        double GetHargaBarang(){
            return Harga_barang;
        }

    public:
        void SetNamaBarang(string __Nama){
            Nama_barang = __Nama;
        }

        void SetJumlahBarang(double __Jumlah){
            Jumlah_barang = __Jumlah;
        }

        void SetHargaBarang(double __Harga){
            Harga_barang = __Harga;
        }
};

class Transaksi : public belanja{
    private:
        double Total_harga;
        float Diskon_belanja = 0.8;

    public:
        double GetTotalHarga(){
            Total_harga = Jumlah_barang * Harga_barang;
            if(Total_harga >= 50000 && Total_harga < 100000){
                Total_harga *= Diskon_belanja;
            } else if (Total_harga >= 100000){
                double pengurangan  = Total_harga * (Diskon_belanja - 0.64);
                Total_harga -= pengurangan;
            }
            return Total_harga;
        }

        void Simpan_data_transaksi(){
            fstream Simpan_data;
            Simpan_data.open("Daftar_Transaksi_Toko.txt", ios::app);
            if(Simpan_data.is_open()){
                Simpan_data <<"================================="<<'\n';
                Simpan_data <<"Nama Barang : "<< GetNamaBarang() <<'\n';
                Simpan_data <<"Jumlah Barang : "<< GetJumlahBarang() <<'\n';
                Simpan_data <<"Harga Barang : "<< GetHargaBarang() <<'\n';
                Simpan_data <<"Total Harga : "<< GetTotalHarga() <<'\n';
                Simpan_data <<"================================="<<'\n';
                Simpan_data.close();
            }
        }

        void Tampilkan_data_transaksi(){
            fstream Tampil_data;
            Tampil_data.open("Daftar_Transaksi_Toko.txt", ios::in);
            if(Tampil_data.is_open()){
                string line;
                while(getline(Tampil_data, line)){
                    cout << line << endl;
                }
                Tampil_data.close();
            }
        }
};

int main() {
    char menu_utama;
    Transaksi Daftar_transaksi;
    
    do{
        string Nama;
        double Jumlah;
        double Harga;
        
        cout << "Masukkan Nama Barang: "; getline(cin, Nama);
        cout << "Masukkan Harga Barang: "; cin >> Harga; cin.ignore();
        cout << "Masukkan Jumlah Barang: "; cin >> Jumlah; cin.ignore();

        Daftar_transaksi.SetNamaBarang(Nama);
        Daftar_transaksi.SetJumlahBarang(Jumlah);
        Daftar_transaksi.SetHargaBarang(Harga);

        cout << "Total Harga: " << Daftar_transaksi.GetTotalHarga() << endl;

        Daftar_transaksi.Simpan_data_transaksi();
        Daftar_transaksi.Tampilkan_data_transaksi();

        cout << "Kembali ke menu utama (y/n): "; cin >> menu_utama; cin.ignore();
        cout << endl;
        
    } while(menu_utama == 'Y' || menu_utama == 'y');

    return 0;
}


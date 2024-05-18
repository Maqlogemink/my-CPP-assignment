# ifndef DEKLARASI_H
# define DEKLARASI_H
using namespace std;

class Hewan{
    private:
        int idx;
        string nama[5];
        string warna[5];
        int panjang[5];
    public:
        Hewan();
        void set_data(string nama_hewan, string warna_hewan, int panjang_hewan);
        void get_data_hewan(int id);
        int get_jumlah_hewan();

};

class Benda{
    private:
        int idx;
        string nama[5];
        string fungsi[5];
        int jumlah[5];
    public:
        Benda();
        void set_data(string nama_benda, string fungsi_benda, int jumlah_benda);
        void get_data_benda(int id);
        int get_jumlah_benda();    

};

#endif


# include <iostream>
# include <algorithm>
# include <string>
# include <vector>
using namespace std;

class Buku{

    private:
        string Judul;
        string Penulis_buku;
        string ISBN;
        int Tahun_rilis;
        double Harga_buku;
        string Genre;

    public :


        string getJudul(){

            return Judul;

        }

        string getNamaPenulis() const{

            return Penulis_buku;

        }

        string get_ISBN() const{

            return ISBN;

        }

        int getTahunRilis() const{

            return Tahun_rilis;

        }

        unsigned int getHarga()  {

            return Harga_buku;
        }

        string getGenre() const {

            return Genre;
        }

    

        string SetJudul(string __Judul){

            Judul = __Judul;
            return Judul;

        }

        string SetNamaPenulis(string __Penulis) {

            Penulis_buku = __Penulis;

            return Penulis_buku;

        }

        string SetISBN( string __ISBN){

            ISBN = __ISBN;

            return ISBN;

        }

        int SetTahunRilis(int __Tahun){


            Tahun_rilis = __Tahun;

            return Tahun_rilis;

        }

        unsigned int SetHarga( unsigned int __Harga) {

            Harga_buku = __Harga;

            return Harga_buku;

        }

        string SetGenre(string __Genre) {

            Genre = __Genre;

            return Genre;
        }

        


        

};

class Tokobuku : public Buku{

    private :

        vector <Buku> DaftarBelanja;
        

    public :

        void TambahDaftarBelanja(Buku __Tambah){

            DaftarBelanja.push_back(__Tambah);

        }

        double TotalBelanja(){
            double Total;
            long int batas_hrg = 150000;
            float potongan_harga = 0.3;

            for(auto it : DaftarBelanja){
                Total += it.getHarga();
            }

            if(Total > batas_hrg){
                double Harga_setDiskon;
                Harga_setDiskon = Total - (Total * potongan_harga);
                return Harga_setDiskon;
                
            }
            else{

                return Total;

            }


        }
};

int main(){



    Buku Buku01,Buku02,Buku03;

    Buku01.SetJudul("Architecture_of_Love");
    Buku01.SetNamaPenulis("Ika Natassa");
    Buku01.SetISBN("978620329260");
    Buku01.SetTahunRilis(2022);
    Buku01.SetHarga(176000);
    Buku01.SetGenre("Romansa");

    

    Buku02.SetJudul("Masquerade_Hotel");
    Buku02.SetNamaPenulis("Keigo Higashino");
    Buku02.SetISBN("978602677040");
    Buku02.SetTahunRilis(2024);
    Buku02.SetHarga(111200);
    Buku02.SetGenre("Misteri");




    Buku03.SetJudul("Totto_chan");
    Buku03.SetNamaPenulis("Tetsuko Kuroyanagi");
    Buku03.SetISBN("9786020636016");
    Buku03.SetTahunRilis(2019);
    Buku03.SetHarga(149000);
    Buku03.SetGenre("Fantasi");

    Tokobuku DaftarBelanja;

    DaftarBelanja.TambahDaftarBelanja(Buku01);
    DaftarBelanja.TambahDaftarBelanja(Buku02);
    DaftarBelanja.TambahDaftarBelanja(Buku03);

    cout << DaftarBelanja.TotalBelanja() << endl;;




    

    





}





        























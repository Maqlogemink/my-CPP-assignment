# include <iostream> 
using namespace std;


class Hewan{
    protected:
        string nama;
        string warna;
        int panjang;
    public:
        void get_data_hewan(){
            cout<<" | "<< nama <<" | "<< warna <<" | "<< panjang <<endl;
        }
};

class Ikan : public Hewan{
    private :
        string jenis_air;
        string jenis_kulit;
    
    public:    
        void set_data(string nama_hewan, string warna_hewan, int panjang_hewan, string air, string kulit)
        {
            nama = nama_hewan;
            warna = warna_hewan;
            panjang = panjang_hewan;
            jenis_air = air;
            jenis_kulit = kulit;
        }
    void get_data_ikan(){
            cout<<" | "<< nama <<" | "<< warna <<" | "<< panjang <<" | "<< jenis_air <<" | "<< jenis_kulit <<" | "<<endl;
    }

};

int main(){

    Ikan ikan[5];
    
    string NAMA_IKAN [5] = {"Kakap","Lele","Nila","Sembilang","Kerapu"};
    string WARNA_IKAN [5] = {"Silver","Hitam","Silver kehitaman","Hitam","Hitam"};
    int PANJANG_IKAN [5] = {35,35,20,40,25};
    string JENIS_AIR [5] = {"Air Asin","Air Tawar","Air Tawar","Air Asin","Air Asin"};
    string JENIS_KULIT [5] = {"Bersisik","Tidak Bersisik","Bersisik","Tidak Bersisik","Bersisik"};

    for(int i = 0; i < 5; i++){
        
        ikan[i].set_data(NAMA_IKAN[i],WARNA_IKAN[i],PANJANG_IKAN[i],JENIS_AIR[i],JENIS_KULIT[i]);

    }

    for(int j = 0; j < 5; j++){
        
        ikan[j].get_data_ikan();

    }




















    return 0;
}
#include <iostream>
using namespace std;

class Ikan{
    private:
        int idx;
        string jenis_air[4];
        string nama_ikan[4];
        int panjang_ikan[4];
        int umur_panen[4];

    public:
    void set_data(string jenis, string nama, int panjang, int umur){
            
            static int count = 0;
            idx = count;
            
            jenis_air[count] = jenis;
            nama_ikan[count] = nama;
            panjang_ikan[count] = panjang;
            umur_panen[count] = umur;
            
            count++;
            
    }

    void get_data(){

        for(int i = 0; i <= idx; i++){
            cout <<" | "<< nama_ikan[i] <<" | "<< jenis_air[i] <<" | "<< panjang_ikan[i] <<" | "
            << umur_panen[i] <<" | "<<endl;
        }
    }

};

int main(){
    Ikan ikan;
    ikan.set_data("Air Asin","Kakap",50,8);
    ikan.set_data("Air Tawar","Nila",20,12);
    ikan.set_data("Air Tawar","Lele",30,6);
    ikan.set_data("Air Asin","Kerapu",40,9);
    
    ikan.get_data();
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

struct bitcoin{

    int banyak_hari;
    int total_keuntungan = 0;


    int Keuntungan_maks(vector <int> __HargaBtc, int __Hari){

        vector <int>::iterator Harga_bawah = __HargaBtc.begin();

        if(__Hari <= 0){
            return 0;
        }

        for(int n = 1; n < __Hari; ++n){
            if(__HargaBtc.at(n) > *Harga_bawah){
                total_keuntungan += (__HargaBtc.at(n) - *Harga_bawah);
                *Harga_bawah = __HargaBtc.at(n);
            }
            else{
                *Harga_bawah = __HargaBtc.at(n);
            }
        }

        return total_keuntungan;



    }

        
       
};

int main() {

    bitcoin *pak_radzi;
    pak_radzi = new bitcoin;
    
    cin >> pak_radzi->banyak_hari;
    vector <int> harga_bitcoin;
    int buffer;
    
    
    for(int i = 0; i < pak_radzi->banyak_hari; ++i){
        cin >> buffer;
        harga_bitcoin.push_back(buffer);
    }

    int result = pak_radzi->Keuntungan_maks(harga_bitcoin,pak_radzi->banyak_hari);

    cout << result << endl;

    delete pak_radzi;
 ;

        
    




    

       
        
      
       
    
    

    
    
    return 0;
}
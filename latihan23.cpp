# include <iostream>
# include <vector>
# include <cstring>
# include <algorithm>
using namespace std;


class Peserta{
private :
    vector <string> __temp;


public:

    vector <string> tambahpeserta(string __tmbh){
         
         __temp.push_back(__tmbh);

        return __temp;
    }

    vector <string> hapuspeserta(string __hps){
         auto it = find(__temp.begin(),__temp.end(),__hps);
        if(it != __temp.end()){
            __temp.erase(it);
        }
        return __temp;
    }

    void tampilkan_peserta(){
        for(const auto it : __temp){
            cout << it <<'\n';
        }
    }


    void caripeserta(string __carinama){
       
                auto it = find(__temp.begin(),__temp.end(),__carinama);
                if(it != __temp.end()){
                    cout << __carinama << " Merupakan peserta ke " << (it+1) - __temp.begin() << endl;
                }
                else {
                    cout << __carinama <<" Bukan peserta lomba " << endl;
                }
        }



    };


int main(){

    vector <string> Daftar_nama_peserta = {"Agus","Dina","Fadli"};
    Peserta peserta_puisi;
    for(const auto it : Daftar_nama_peserta){
        peserta_puisi.tambahpeserta(it);
    }

    peserta_puisi.tampilkan_peserta();
    peserta_puisi.hapuspeserta("Fadli");
    peserta_puisi.tampilkan_peserta();

   

  
    

    




    




   






}
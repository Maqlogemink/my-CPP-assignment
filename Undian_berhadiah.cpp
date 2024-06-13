# include <bits/stdc++.h>
using namespace std;

struct KuponBerhadiah {

    vector <int> No_kupon_peserta;
    unsigned int banyak_peserta; 
    const int MAKS_DIGIT = 5;
    const unsigned int MAKS_PESERTA = 1000;
    const unsigned int MAKS_NILAI = 99999;

    void Kupon_peserta(int __BanyakPeserta){ // Memasukkan banyak kupon sesuai banyak peserta

        unsigned int *buffer;
        buffer = new unsigned int;

        for(int i = 0; i < __BanyakPeserta; ++i){

            cout <<"Masukkan No Kupon Peserta ke "<< i+1 <<" : "; cin >> *buffer; cin.clear();

            if(*buffer < MAKS_NILAI){    // jika nilai digit kupon peserta lebih kecil daripada maks digit kupon
                No_kupon_peserta.push_back(*buffer);
            }
            else{
                cout <<"No Kupon Peserta Invalid" << endl;
                continue;
            }

        }
            cout <<"======================================\n";

        delete buffer;


    }


    vector<int> Kupon_pemenang(int __KuponPakSapta){

        vector <int> Kumpulan_kupon; 
        int min_diff = 1; // selisih minimal kupon peserta dengan kupon pak sapta

        sort(No_kupon_peserta.begin(),No_kupon_peserta.end()); // mengurutkan vector No_kupon_peserta dari terkecil ke terbesar 

        auto bottom = lower_bound(No_kupon_peserta.begin(),No_kupon_peserta.end(),__KuponPakSapta - min_diff); // mencari elemen dengan nilai lebih kecil selisihnya  paling kurang 1 digit
        auto top = upper_bound(No_kupon_peserta.begin(),No_kupon_peserta.end(), __KuponPakSapta + min_diff); // mencari elemen dengan nilai lebih besar selisihnya paling lebih 1 digit 

        for(;bottom != top; ++bottom){
            if(abs(*bottom - __KuponPakSapta) >= min_diff){ // jika selisih kupon peserta dan kupon pak sapta lebih dari sama dengan selisih minimal
                Kumpulan_kupon.push_back(*bottom);
            }
            
        }

        


        return Kumpulan_kupon;
    

    }  


};

int main(){

    KuponBerhadiah *pemenang;
    pemenang = new KuponBerhadiah;

    unsigned int No_kupon_pak_sapta;


    cout <<"Masukkan banyak peserta : "; cin >> pemenang->banyak_peserta;
    cout <<"Masukkan no kupon pak sapta : "; cin >> No_kupon_pak_sapta;
    cout <<"===================================\n";

    // Jika banyak peserta kurang dari Maks peserta dan nilai kupon pak sapta kurang dari nilai maks digit kupon
    if(pemenang->banyak_peserta < pemenang->MAKS_PESERTA && No_kupon_pak_sapta < pemenang->MAKS_NILAI){
    
        pemenang->Kupon_peserta(pemenang->banyak_peserta);
        for(const auto& it : pemenang->Kupon_pemenang(No_kupon_pak_sapta)){
            
            cout <<setw(pemenang->MAKS_DIGIT) << setfill('0') << it << endl;
        }
            

    }
    else{

       return 0;

    }

    delete pemenang;








    return 0;

}












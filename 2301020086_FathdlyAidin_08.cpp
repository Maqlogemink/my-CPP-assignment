#include <iostream>
#include "Deklarasi.h"
#include "Hewan.cpp"
#include "Benda.cpp"
int main(){

    Hewan hewan;
    hewan.set_data("Kucing","Putih",40);
    hewan.set_data("Ikan","Merah",20);

    Benda benda;
    benda.set_data("Kursi","Duduk",4);
    benda.set_data("Meja","Saji Makanan",2);
    cout <<"======================Data Hewan=========================="<<endl;
    for(int i = 0; i < hewan.get_jumlah_hewan(); ++i){
        hewan.get_data_hewan(i);
    }
    cout <<"======================Akhir Data Hewan===================="<<endl;
    
    cout <<"======================Data Benda=========================="<<endl;
    for(int j = 0; j < benda.get_jumlah_benda(); ++j){
        benda.get_data_benda(j);
    }
    cout <<"===================Akhir Data Benda======================="<<endl;
    
    return 0;
}
# include <iostream>
# include "Deklarasi.h"
using namespace std;

Benda::Benda(){
    idx = 0;
}

void Benda::set_data(string nama_benda, string fungsi_benda, int jumlah_benda){
    nama[idx] += nama_benda;
    fungsi[idx] += fungsi_benda;
    jumlah[idx] += jumlah_benda;
    idx++;
}

void Benda::get_data_benda(int id){
    
    cout <<" | "<<nama[id]<<"  | "<<fungsi[id]<<" | "<<jumlah[id]<<" | "<<endl;
    
}
int Benda::get_jumlah_benda(){
    return idx;
}
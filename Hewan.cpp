# include <iostream>
# include "Deklarasi.h"
using namespace std;

Hewan::Hewan(){
    idx = 0;
}

void Hewan::set_data(string nama_hewan, string warna_hewan, int panjang_hewan){
    nama[idx] += nama_hewan;
    warna[idx] += warna_hewan;
    panjang[idx] += panjang_hewan;
    idx++;
}

void Hewan::get_data_hewan(int id){
    
    cout <<" | "<<nama[id]<<" | "<<warna[id]<<" | "<<panjang[id]<<" | "<<endl;
    
}

int Hewan::get_jumlah_hewan(){
    return idx;
}
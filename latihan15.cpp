#include <iostream>
using namespace std;

    struct 
    {
        string nama_mahasiswa[10];
        string nomor_induk[10];
        int umur[10];
    }data_mahasiswa_informatika, data_mahasiswa_elektro, data_mahasiswa_perkapalan;





void tambahinformatika(){
    for(int i = 0; i < 10; i++){
        cout <<"Masukkan nama siswa ke - "<< i+1 <<" : "; cin >>data_mahasiswa_informatika.nama_mahasiswa[i];

        cout <<"Masukkan nomor induk siswa ke - "<< i+1 <<" : "; cin >>data_mahasiswa_informatika.nomor_induk[i];

        cout <<"Masukkan umur siswa ke - "<< i+1 <<" : "; cin >> data_mahasiswa_informatika.umur[i];
    }
}



void tambahelektro(){
    for(int j = 0; j < 10; j++){
        cout <<"Masukkan nama siswa ke - "<< j+1 <<" : "; cin >>data_mahasiswa_elektro.nama_mahasiswa[j];

        cout <<"Masukkan nomor induk siswa ke - "<< j+1 <<" : "; cin >>data_mahasiswa_elektro.nomor_induk[j];

        cout <<"Masukkan umur siswa ke - "<< j+1 <<" : "; cin >> data_mahasiswa_elektro.umur[j];
    }
}

void tambahperkapalan(){
    for(int k = 0; k < 10; k++){
        cout <<"Masukkan nama siswa ke - "<< k+1 <<" : "; cin >>data_mahasiswa_perkapalan.nama_mahasiswa[k];

        cout <<"Masukkan nomor induk siswa ke - "<< k+1 <<" : "; cin >>data_mahasiswa_perkapalan.nomor_induk[k];

        cout <<"Masukkan umur siswa ke - "<< k+1 <<" : "; cin >> data_mahasiswa_perkapalan.umur[k];
    }
}





void lihat(string pilihan, int nomor_urut){
    if(pilihan == "elektro "){
        for(int j = 0; j < 10; j++){
            if(j == nomor_urut){
                cout <<" Nama mahasiswa ke - "<< j+1 <<" : "<< data_mahasiswa_elektro.nama_mahasiswa[j];

                cout <<"Nomor induk mahasiswa ke - "<< j+1 <<" : "<< data_mahasiswa_elektro.nomor_induk[j];

                cout <<"Umur mahasiswa ke - "<< j+1 <<" : " << data_mahasiswa_elektro.umur[j];
            }
        }
    }
    if(pilihan == "informatika"){
        for(int i = 0; i < 10; i++){
            if(i == nomor_urut){
                cout <<"Nama Mahasiswa ke - "<< i+1 <<" : " << data_mahasiswa_informatika.nama_mahasiswa[i];

                cout <<"Nomor induk mahasiswa ke - "<< i+1 <<" : " << data_mahasiswa_informatika.nomor_induk[i];

                cout <<"Umur mahasiswa ke - "<< i+1 <<" : "<< data_mahasiswa_informatika.umur[i];
            }
        }
    }
    if(pilihan =="perkapalan"){
        for(int k = 0; k < 10; k++){
            if(k == nomor_urut){
                cout <<"Nama mahasiswa ke - "<< k+1 <<" : " << data_mahasiswa_perkapalan.nama_mahasiswa[k];

                cout <<"Nomor induk mahasiswa ke - "<< k+1 <<" : " << data_mahasiswa_perkapalan.nomor_induk[k];

                cout <<"Umur mahasiswa ke - "<< k+1 <<" : " << data_mahasiswa_perkapalan.umur[k];
                }
            }
        }
    }

void menu_pilihan(string pilihan_prodi){

    int pilihan_menu, nomor_urut;

    do {   
        cout <<"Menu Pilihan \n"
        <<"1. Tambah \n"
        <<"2. Lihat \n"
        <<"3. Keluar \n "
        <<"Pilihan : "; cin >> pilihan_menu;

        if(pilihan_prodi == "informatika"){
            switch (pilihan_menu)
            {
            case 1:
                tambahinformatika();
                break;
            case 2:
                cout <<"silahkan masukkan no urut mahasiswa : \n"; cin >> nomor_urut; 
                lihat("informatika",nomor_urut);
                break;
        }
        }

        if(pilihan_prodi == "elektro"){
            switch (pilihan_menu)
            {
            case 1:
                tambahelektro();
                break;
            case 2:
                cout <<"silahkan masukkan no urut mahasiswa : \n"; cin >> nomor_urut; 
                lihat("elektro",nomor_urut);
                break;
           
        }
        }

        if(pilihan_prodi == "perkapalan"){
            switch (pilihan_menu)
            {
            case 1:
                tambahperkapalan();
                break;
            case 2:
                cout <<"silahkan masukkan no urut mahasiswa : \n"; cin >> nomor_urut; 
                lihat("perkapalan",nomor_urut);
                break;
           }
        }





        
    }while(pilihan_menu != 3);

}
    

    
    
   
    


int main(){

    int pilihan_prodi;
    char menu_utama;


    do{
        cout <<"\t PROGRAM MANAJEMEN DATA MAHASISWA \t \n";
        cout <<" Selamat Datang di aplikasi ....\n";
        cout <<" Silahkan pilih prodi \n"
        <<"1. Informatika \n"
        <<"2. Elektro \n"
        <<"3. Perkapalan \n";


        cout <<"ketik  : "  ; cin >> pilihan_prodi; 
        
        switch (pilihan_prodi){
            case 1 :
                menu_pilihan("informatika");
                break;
            
            case 2: 
                menu_pilihan("elektro");
                break; 
            
            case 3:
                menu_pilihan("perkapalan");
                break;
            }

        cout <<"Kembali ke menu utama (y/n) : "; cin >> menu_utama;
    }while(menu_utama == 'y' || menu_utama =='Y');
 

    
    
    

    



    return 0;

}
        
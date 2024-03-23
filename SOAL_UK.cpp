#include <iostream>
using namespace std;

int main(){

    // deklarasi variabel penyimpan 
    string nisn[10];
    string nama[10];
    int umur[10];
    // variabel perintah user 
    char instruksi;
    char ulang;


    do{
        cout <<"\t PROGRAM MANAJEMEN DATA SISWA \t" << endl;
        cout <<"Silahkan Pilih Menu : \n"
        << "L untuk melihat data \n"
        << "T untuk menambahkan data \n"
        << "R untuk menunjukkan rata - rata umur siswa \n"
        << "B keluar dari aplikasi "<< endl;

        cout <<"ketikkan instruksi anda : "; cin >> instruksi;

        
        if(instruksi == 'L'){
            int no_urut; 
            cout <<"Masukkan  no urut siswa :  "; cin >> no_urut;

            
            if(no_urut >= 1 && no_urut <= 10){
                for(int j = 0; j < 10; j++){
                    if(j == no_urut){
                        cout <<"Siswa no urut "<< j <<" Bernama "<< nama[j] <<" dengan nomor induk siswa nasional "
                        << nisn[j] <<" berumur " << umur[j] << endl;
                    }
                }
            }
            else{
                cout <<"input anda tidak valid !!";
                return 1;
            }


        }

        if(instruksi == 'T'){
            for(int i = 0; i < 10; i++){
                cout << "Masukkan Nama Siswa ke - "<< i+1 <<" : \n";
                cin >> nama[i];

                cout <<"Masukkan Nim Siswa ke -  "<< i+1<<" : \n";
                cin >> nisn[i];

                cout <<"Masukkan Umur Siswa ke - "<< i+1<<" : \n";
                cin >>umur[i];

                cout << endl;
            }
        }
            
        if(instruksi == 'R'){
            double total_umur = 0;
            total_umur += umur[10];

            double rata_rata = total_umur / sizeof(umur);
            cout <<"Rata-rata : "<< rata_rata << endl;

            break;
            }

        if(instruksi == 'B'){
            cout <<"apakah anda ingin keluar (y/n) : "; cin >> ulang;
                if(ulang =='y'){
                    break;
                } 
        }
        

    }while(ulang != false);





















    return 0;
}
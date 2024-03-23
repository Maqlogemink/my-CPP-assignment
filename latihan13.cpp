# include <iostream>
# include <vector> 
using namespace std;


double segitiga(double alas,double tinggi,double &hasil){
    hasil = alas * tinggi * 0.5;
    return hasil;
}
double persegi(double sisi1,double sisi2, double &hasil){
    hasil = sisi1 * sisi2;
    return hasil;
}
double trapesium(double alas1,double alas2,double tinggi, double &hasil){
    hasil = alas1 + alas2 * tinggi;
    return hasil;
}


int main(){

    char pilihan;
    int pilih;
    cout <<"\t PROGRAM HITUNG BANGUN DATAR \t\n";
    cout <<"Silahkan pilih bangun datar yang ingin dihitung : \n"
    << "1.Segitiga \n"
    <<"2.Persegi Panjang \n" 
    <<"3.Trapesium \n";
    cin >> pilih;

    while(true){
        switch (pilih)
        {
        case 1 :
            double alas, tinggi_segitiga, hasil1;
            cout <<"Masukkan Alas Dari Segitiga : "; cin >> alas;
            cout <<"Masukkan Tinggi Dari Segitiga : "; cin >> tinggi_segitiga;
            cout <<"Hasil : "<< segitiga(alas,tinggi_segitiga,hasil1)<< endl; 
            break;
        
        case 2 : 
            double sisi1, sisi2, hasil2;
            cout <<"Masukkan Sisi Pertama Dari Persegi Panjang : "; cin >> sisi1;
            cout <<"Masukkan Sisi Kedua Dari Persegi Panjang : "; cin >>sisi2;
            cout <<"Hasil : "<< persegi(sisi1,sisi2,hasil2)<< endl;
            break;
        
        case 3 : 
            double alas1, alas2, tinggi_trapesium, hasil3;
            cout <<"Masukkan Alas Pertama Dari Trapesium : "; cin >> alas1;
            cout <<"Masukkan Alas Kedua Dari Trapesium : "; cin >> alas2;
            cout <<"Masukkan Tinggi Dari Trapesium : "; cin >> tinggi_trapesium;
            cout <<"Hasil : "<< trapesium(alas1,alas2, tinggi_trapesium,hasil3) <<endl;

        default:
            cout <<"Pilihan anda tidak ada didalam program !! "<< endl;
            break;
        }


        cout <<"Kembali Ke Menu Utama ? (y/n)  : "; cin >> pilihan;

        if(pilihan != 'y'){
            break;
        }
        
    }


    



  
    
}
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
      float alas,tinggi;
      float panjang, lebar;
      char pilih,ulang;
     
      do{

       cout<<"========================="<<endl;
       cout<<"\n Menghitung luas bangun datar \n"
             <<"1. Persegi Panjang \n"
             <<"2. Segitiga \n"
             <<"3. Jajar Genjang \n"
             <<"Pilih (1,2,3) : ";cin>>pilih;
       cout<<"==========================="<<endl;

       switch(pilih){
        case '1' :
                   cout<<"Menghitung luas persegi panjang"<<endl;
                   cout<<"panjang = ";cin>>panjang;
                   cout<<" lebar = "; cin>>lebar;

                   cout<<"Luas persegi = "<<panjang*lebar;
              break;
        case '2' :
                   cout<<"Menghitung luas segitiga"<<endl;
                   cout<<"Alas = ";cin>>alas;
                   cout<<"Tinggi = ";cin>>tinggi;

                   cout<<"Luas segitiga = "<<0.5 * alas * tinggi;
              break;
        case '3' :
                   cout<<"Menghitung luas Jajar Genjang"<<endl;
                   cout<<"alas= "; cin>>alas;
                   cout<<" tinggi="; cin>>tinggi;
                   cout<<"Luas lingkaran = "<<alas * tinggi;
              break;
         default :
                   cout<<"Pilihan anda tidak ada di sistem"<<endl;
    }
    
   cout<<"\nKembali ke menu utama ? (y/n) "; cin>>ulang; //untuk      kembali ke dalam blok do-while

   


      }while(ulang == 'y' || ulang == 'Y'); 
}
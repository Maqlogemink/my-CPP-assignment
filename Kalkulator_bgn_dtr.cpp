# include <iostream>
# include <cmath>
using namespace std;

int main(){

    cout << "Kalkulator Bangun Datar" << endl;
    cout << "========================"<< endl;
    cout << "Silahkan pilih bangun datar yang ingin dihitung luasnya : " << endl;
    cout << "1. Lingkaran" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "4. Jajar genjang " << endl;
    cout << "(pilih 1,2,3,4)"<< endl;
    double r;
    double s1, s2;
    float alas, tinggi;
    int  bgn_dtr;
    cin >> bgn_dtr;

    switch(bgn_dtr){
        case 1 : 
            {const float phi = 3.14;
            cout << "Masukkan panjang jari - jari lingkaran : ";
            cin >> r ;
            cout << "Luas lingkaran adalah : "<< phi*pow(r,2)<< endl;}
            break;
        case 2 :
            {cout << "Masukkan Sisi pertama" << endl;
            cin >> s1;
            cout << " Masukkan Sisi kedua :" << endl;
            cin >> s2;
            cout << "Luas Persegi Panjang adalah : "<< s1*s2 << endl;}
            break;
        case 3 :
            cout << "Masukkan Alas  : " << endl;
            cin >> alas ;
            cout << "Masukkan Tinggi : "<< endl;
            cin >> tinggi ;
            cout << "Luas Segitiga Adalah : "<< 0.5 * alas * tinggi  <<endl;
            break;
        case 4:
            {cout << "Masukkan Alas : "<< endl;
            cin >> alas; 
            cout << "Masukkan Tinggi : " << endl;
            cin >> tinggi ;
            cout << "Luas Jajargenjang adalah : "<< alas * tinggi <<endl;}
            break;
        default:
            cout << "pilih angka 1 - 4"<< endl;





    
        }    
}
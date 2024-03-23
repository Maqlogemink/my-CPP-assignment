/*
variabel berfungsi untuk menyimpan nilai data 

Di dalam c++, terdapat berbagai tipe variabel contoh:

~ int, menyimpan data integer yaitu semua data yang berisi angka namun bukan desimal 
~ double, menyimpan data yang berisi angka desimal 
~ char, menyimpan data yang hanya berisi satu karakter contohnya 'A' nilai dari variabel char diapit oleh tanda petik satu ' ' 
~ string, menyimpan data yang berisi huruf contohnya "ngoding" nilai dari variabel string diapit oleh tanda petik dua " "
~ bool, menyimpan data yang berisi dua kondisi yaitu : True atau False 
*/


/*
CARA MENDEKLARASIKAN VARIABEL 

untuk membuat sebuah variabel, tulis tipe variabel dan sematkan pada nilai variabelnya 

contoh :

tipe variabel nama variabel = nilai ;

int angka = 12;
double desimal = 12,5;
char karakter = 'X';
string kata = "Ngoding";
bool kondisi = True;

*/
#include <iostream>
using namespace std;

int main() {

    int angka = 12;
    cout << "contoh integer : \n "<< angka <<'\n';

    double desimal = 19.59;
    cout <<"contoh desimal : \n"<< desimal <<'\n';

    char karakter = 'X';
    cout << "contoh karakter : \n "<< karakter<<'\n';

    string  nama = "Ardila";
    cout << "contoh string : \n" << nama<<'\n';

    bool kondisi = 0;
    cout << "APAKAH DIA SEORANG PAHLAWAN ? \n" << kondisi <<'\n' ;


    // Mendeklarasikan banyak variabel 
    // contoh 
    int x = 7, y = 9, z = 12; 
    cout <<"Hasil penjumlahan x + y + z : "<< x + y + z << endl;

    // bisa juga seperti ini jika nilai variabelnya sama 
    int a, b, c;
    a = b = c = 100;
    cout <<"Hasil penjumlahan a + b + c  : " << a + b + c << '\t'<<endl;



    // const berfungsi untuk mengunci nilai variabel agar tidak dapat diubah setelah dideklarasikan 
    // contoh 

    const string alamat = "Jl. DI Panjaitan";
    cout << alamat ;



    


    return 0;








}

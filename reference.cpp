# include <iostream>
using namespace std;

int main(){
    /*
                                                    REFERENCE

    sebuah variabel adalah referensi dari variabel yang sudah ada. dan itu dibuat dengan & operator :

    contoh :
    string buah = "jeruk";
    string &makanan  = buah;

    */

   int bilangan_genap = 2;
   int &bilangan_prima = bilangan_genap;

  cout << bilangan_prima << endl;




}
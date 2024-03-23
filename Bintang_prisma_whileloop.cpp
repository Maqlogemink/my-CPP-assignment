# include <iostream>
using namespace std;

int main(){

    int i, spasi, bintang, baris;
    cout << "======PROGRAM BINTANG BELAH KETUPAT======"<<endl;
    cout <<"Masukkan baris : "; cin >> baris;

    i = 1;
    while (i <= baris){
        spasi = 1;
        while (spasi <= baris - i) {
            cout << "   ";
            spasi++;
        }

        bintang = 1;
        while (bintang <= 2 * i - 1) {
            cout << " * ";
            bintang++;
        }

        cout << endl;
        i++;
    } 

    i = baris - 1;
     {
        spasi = 1;
        while (spasi <= baris - i) {
            cout << "   ";
            spasi++;
        }

        bintang = 1;
        while (bintang <= 2 * i - 1) {
            cout << " * ";
            bintang++;
        }

        cout << endl;
        i--;
    } 
    return 0;

          
}
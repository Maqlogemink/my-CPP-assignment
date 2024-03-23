#include <iostream>
using namespace std;

int main() {
	
    int i, spasi, bintang, baris;
    cout << "======PROGRAM BINTANG BELAH KETUPAT======"<<endl;
    cout <<"Masukkan baris : "; cin >> baris;

    i = 1;
    do {
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
    } while (i <= baris);

    i = baris - 1;
    do {
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
    } while (i >= 1);

    return 0;
}


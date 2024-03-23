#include <iostream>
using namespace std;

int main(){
    cout << "       Program Kasir      "<< endl;
    cout << "==========================" << endl;
    cout << "Masukkan Total Belanja Anda :";
    cout << endl;
    double Total_Belanja;
    double Diskon;
    double Harga_set_diskon;
    cin >> Total_Belanja;

    if (Total_Belanja >= 100000 && Total_Belanja < 500000){
        Diskon  = Total_Belanja * 0.05;
        Harga_set_diskon = Total_Belanja - Diskon;
        cout << "Total belanjaan Anda :  "<< Total_Belanja << endl;
        cout << "Harga Setelah Diskon : "<< Harga_set_diskon << endl;
        cout << "Anda Hemat 5% !!"<< endl;
    }
    else if (Total_Belanja >= 500000){
        Diskon = Total_Belanja * 0.010;
        Harga_set_diskon = Total_Belanja - Diskon;
        cout << "Total belanjaan Anda :  "<< Total_Belanja << endl;
        cout << "Harga Setelah Diskon : "<< Harga_set_diskon << endl;
        cout << "Anda Hemat 10% !!"<< endl;
    }
    else {
        cout << "Total belanjaan Anda :  "<< Total_Belanja << endl;
        cout << "Dapatkan Diskon 5\%  jika anda belanja lebih dari 100K dan 10\% jika anda belanja lebih dari 500K!!!" << endl;

    }
    cout << endl;
    cout << "Terima Kasih dan Jangan lupa berkunjung di toko kami lagi :) "<< endl;
    cout << "==================="<< endl;


    return 0;

}
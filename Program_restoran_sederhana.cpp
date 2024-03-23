#include <iostream>
#include <iomanip>
using namespace std;



int main (){

    cout << "Selamat Datang di Restoran Surya" <<endl;
    cout << "Makanan / Minuman ?"<< endl;

    int makanan ;
    int minuman ;
    char ulang,ULANG ;
    string pilihan ;
    getline(cin, pilihan );


    do{
        
        do {    
            if (pilihan=="makanan"){

            cout << "================================"<<endl;
            cout << "Silahkan pilih menu : " << endl;
            cout << "1. Nasi Goreng"<< endl;
            cout << "2. Mie Goreng"<< endl;
            cout << "3. Soto"<< endl;
            cout << "4. Ayam Geprek"<< endl;
            cout << "5. Sate Ayam"<< endl;
            cout << "==============================="<<endl;
            cin >> makanan;
            switch (makanan){
                case 1:
                    cout << "Nasi Goreng Harganya Rp.10.000"<< endl;
                    break;
                case 2:
                    cout << "Mie Goreng Harganya Rp.10.000" << endl;
                    break;
                case 3:
                    cout << "Soto Harganya Rp.10.000"<< endl;
                    break;
                case 4:
                    cout <<"Ayam Geprek Harganya Rp.16.000"<< endl;
                    break;
                case 5:
                    cout <<"Sate Ayam Harganya Rp.15.000"<< endl;
                    break;
                }
        }
        cout << "Kembali ke menu utama ?" << "(y/n)" << endl; cin >> ulang; ;
        } while (ulang == 'Y' || ulang == 'y');

        do{
        
        if (pilihan == "minuman"){
            cout << "================================"<<endl;
            cout << "Silahkan pilih menu : " << endl;
            cout << "1. Teh Obeng"<< endl;
            cout << "2. Kopi Susu"<< endl;
            cout << "3. Kopi O"<< endl;
            cout << "4. Teh O"<< endl;
            cout << "5. Teh Tarik"<< endl;
            cout << "==============================="<<endl;

            cin >> minuman;
            switch (minuman){
                case 1 :
                    cout <<"Teh Obeng Harganya Rp.6000";
                    break ;
                case 2 :
                    cout <<"Kopi Susu Harganya Rp.6000";
                    break;
                case 3 :
                    cout <<"Kopi O Harganya Rp.5000";
                    break;
                case 4 :
                    cout <<"Teh O Harganya Rp.5000";
                    break;            
                case 5 :
                    cout <<"Teh Tarik Harganya Rp.10000"<< endl;
                    break;
                }
        }
        cout << "Kembali ke menu utama ?" << "(y/n)" << endl; 
        cin >> ulang; ;
        } while (ulang == 'Y' || ulang == 'y');

    } while(ULANG == 'Y' || ULANG == 'y');

        

    







    return 0;



}
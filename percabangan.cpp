# include<iostream>
using namespace std;

int main(){
    // percabangan digunakan untuk menentukan kondisi 


    int Umur ;
    cout << "Masukkan Umur Anda Sekarang" << endl;
    cin >> Umur ; 

    if (Umur < 5){
        cout << "Umur balita";
    }
    else if (Umur < 12 && Umur > 5){
        cout<< "Umur anak - anak";
    }
    else if (Umur < 19 && Umur > 12 ){
        cout<< "Umur remaja";
    }
    else if (Umur < 60 && Umur >19 ){
        cout << "Dewasa";
    }
    else {
        cout<< "Lansia" << endl;
    }


    int X = 120;
    int Y = 170;

    if (X < Y and Y - X >= 150){
        cout <<"X kurang dari Y, selisih X dan Y >= 150";
    } 
    else if (X > Y and Y - X <= 150){
        cout <<"X lebih dari Y, selisih X dan Y <= 150";
    } 
    else if (X < Y and Y - X <= 150){
        cout <<"X kurang dari Y, selisih X dan Y <= 150";
    }
    else {
        cout <<"X lebih dari Y, selish X dan Y >= 150";
    }

    

}
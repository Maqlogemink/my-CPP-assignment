# include <iostream> 
using namespace std;

int main(){
    int long angka, hasil, x;
    hasil = 1;
    cout << "Masukkan Angka : "<< endl;
    cin >> angka;

    for(x = 1; x <= angka; x++){
        hasil = hasil * x;
    }

    cout <<"Faktorial dari " << angka << " : "<< hasil << endl;
    return 0;



}
# include <iostream>
using namespace std;

int main(){
    int x = 10;
    cout << "anak ayam : " << x <<endl;
    cout << "Tek Kotek Kotek Kotek Anak Ayam Turun Berkotek"<< endl;
    for (x = 10 ; x >= 1 ; x--){
        cout << "Anak Ayam Turun " << x << " Mati Satu Tinggal " << (x - 1) << ' ';
        if (x == 0){
            break;
        }
    cout << endl;
   }
    
}
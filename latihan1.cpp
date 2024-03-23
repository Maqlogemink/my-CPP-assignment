# include <iostream> 
# include <conio.h>
using namespace std;

int main(){

    cout << "Hello \n World ";
    string nama, alamat, No_HP;
    int nim;

    // getline hanya untuk string 
    // long int digunakan untuk menyimpan lebih banyak nilai integer 

    cout <<"Masukkan Nama anda : "<< '\n';
    getline (cin,nama);

    cout <<"Masukkan Alamat anda :"<< '\n';
    getline (cin,alamat);
    cout <<"Masukkan Nomor Handphone anda :" << '\n';
    getline (cin,No_HP);
    cout <<"Masukkan NIM anda :"<< '\n';
    cin >> nim;
    
    return 0;    


}
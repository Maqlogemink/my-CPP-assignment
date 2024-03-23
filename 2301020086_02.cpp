# include <iostream>
# include <iomanip>
using namespace std;

int main(){

    int nilai_mahasiswa;
    char ulang;

    do{
    cout << "=======PROGRAM GRADING NILAI MAHASISWA======="<<endl;
    cout << "masukkan nilai mahasiswa : "; cin >> nilai_mahasiswa;
        if (nilai_mahasiswa <= 100){
            if(nilai_mahasiswa >= 90 && nilai_mahasiswa <= 100){
                cout <<"Nilai Mahasiswa : 'A' "<< endl;
            }
            else if (nilai_mahasiswa >= 81 && nilai_mahasiswa <= 89){
                cout <<"Nilai Mahasiswa : 'A-' "<< endl;
            }
            else if (nilai_mahasiswa >= 76 && nilai_mahasiswa <= 80){
                cout <<"Nilai Mahasiswa : 'B+' "<< endl;
            }
            else if (nilai_mahasiswa >= 71 && nilai_mahasiswa <= 75){
                cout <<"Nilai Mahasiswa : 'B' "<< endl;
            }
            else if (nilai_mahasiswa >= 66 && nilai_mahasiswa <= 70){
                cout <<"Nilai Mahasiswa : 'B-' "<< endl;
            }
            else if (nilai_mahasiswa >= 61 && nilai_mahasiswa <= 65){
                cout <<"Nilai Mahasiswa : 'C+' "<< endl;
            }
            else if (nilai_mahasiswa >= 51 && nilai_mahasiswa <= 60){
                cout <<"Nilai Mahasiswa : 'C' "<< endl;
            }
            else if (nilai_mahasiswa >= 46 && nilai_mahasiswa <= 50){
                cout <<"Nilai Mahasiswa : 'D' "<< endl;
            }
            else {
                cout <<"Nilai Mahasiswa : 'E' "<< endl;
            }
            }
        else{
            cout <<"Nilai yang hanya dapat dimasukkan tidak lebih dari 100 !" << endl;
        }
    cout <<"kembali ke menu utama ? (y/n) "; cin >> ulang;
    } while(ulang == 'Y' || ulang == 'y');

    return 0;


}
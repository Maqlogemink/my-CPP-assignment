# include <iostream>
using namespace std;

int main (){

    cout <<"Program menentukan Nilai Mahasiswa"<<endl;
    cout <<"=================================="<<endl;
    cout <<"Masukkan nilai mahasiswa : "<< endl;
    int Nilai_Mahasiswa ;
    cin >> Nilai_Mahasiswa;

    if (Nilai_Mahasiswa >= 90 && Nilai_Mahasiswa <= 100){
        cout << "Nilai anda A";
    }
    else if (Nilai_Mahasiswa >= 81 && Nilai_Mahasiswa <= 89){
        cout << "Nilai anda A-";
    }
    else if (Nilai_Mahasiswa >= 76 && Nilai_Mahasiswa <= 80){
        cout << "Nilai anda B+";
    }
    else if (Nilai_Mahasiswa >= 71 && Nilai_Mahasiswa <= 75){
        cout << "Nilai anda B";
    }
    else if (Nilai_Mahasiswa >= 66 && Nilai_Mahasiswa <= 70){
        cout << "Nilai anda B-";
    }
    else if (Nilai_Mahasiswa >= 61 && Nilai_Mahasiswa <= 65){
        cout << "Nilai anda C+";
    }
    else if (Nilai_Mahasiswa >= 51 && Nilai_Mahasiswa <= 60){
        cout << "Nilai anda C";
    }
    else if (Nilai_Mahasiswa >= 46 && Nilai_Mahasiswa <= 50){
        cout << "Nilai anda D";
    }
    else {
        cout << "Nilai anda E";
    }










}
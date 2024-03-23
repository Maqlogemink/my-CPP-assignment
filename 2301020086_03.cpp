# include <iostream>
using namespace std;

int main(){

    int umur;
    cout <<"=======PROGRAM PENENTU RANGE USIA======="<< endl;
    cout <<"silahkan pilih range umur anda : "<< endl;
    cout <<" 1. 0 - 5 tahun \n";
    cout <<"2. 6 - 12 tahun \n";
    cout <<"3. 13 - 17 tahun \n";
    cout <<"4. > 18  tahun \n";
    cin >> umur; 

    switch (umur)
    {
    case 1:{

        cout <<"Balita \n"; 
        break;
    }
    case 2:{

        cout <<"Anak - Anak \n"; 
        break;
    }
    case 3:{

        cout <<"Remaja \n"; 
        break;
    }
    case 4:{

        cout <<"Dewasa \n"; 
        break;
    }
    default:
        cout <<"Input hanya menerima angka lebih dari 0 !!!";
        break;
    }
}
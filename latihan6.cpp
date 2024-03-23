# include <iostream>
using namespace std;

int main() {
    int y;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> y;

    int nilai[y];
    string nama[y];
    for (int b = 0; b < y; ++b){
        cout <<"Masukkan nama mahasiswa ke-" << b + 1 <<" : " ;
        cin >> nama[b];
    }

    for (int a = 0; a < y; ++a) {
        cout << "Masukkan nilai mahasiswa ke-" << a + 1 <<" : ";
        cin >> nilai[a];
    }


    cout << "\nData mahasiswa :\n"<<endl;
    cout << "Jumlah mahasiswa : " << y << endl;
    cout << "Nilai mahasiswa:" <<endl;
    cout << "========================================" << endl;
   
    
    for (int b = 0; b < y; ++b){
        cout << "Mahasiswa ke-" << b + 1 << ": " << nama[b] << endl;
        }
    for (int a = 0; a < y; ++a) {   
        cout << "Mahasiswa ke-" << a + 1 << ": " << nilai[a] << endl;
        }
    
        
	cout << "========================================" << endl;
    return 0;
}
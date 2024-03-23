# include <iostream>
using namespace std;


int main() {
    int baris, kolom;

    // Input ukuran matriks
    cout << "Masukkan jumlah baris matriks: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks: ";
    cin >> kolom;

    // Inisialisasi matriks pertama (A)
    int matriksA[baris][kolom];
    cout << "Masukkan elemen matriks A:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan elemen A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriksA[i][j];
        }
    }

    // Inisialisasi matriks kedua (B)
    int matriksB[baris][kolom];
    cout << "Masukkan elemen matriks B:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukkan elemen B[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriksB[i][j];
        }
    }

    // Matriks hasil penjumlahan (C)
    int matriksC[baris][kolom];

    // Penjumlahan matriks A dan B
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    // Menampilkan hasil penjumlahan
    cout << "Hasil penjumlahan matriks A dan B:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matriksC[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

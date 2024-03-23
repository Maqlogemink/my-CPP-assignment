// program faktorial dengan fungsi 
# include <iostream>
using namespace std;


// Deklarasi fungsi untuk menghitung faktorial
unsigned long long hitungFaktorial(int n);

int main() {
    int angka;

    // Input dari pengguna
    std::cout << "Masukkan bilangan untuk menghitung faktorial: ";
    std::cin >> angka;

    // Memanggil fungsi untuk menghitung faktorial
    unsigned long long hasil = hitungFaktorial(angka);

    // Menampilkan hasil
    std::cout << "Faktorial dari " << angka << " adalah: " << hasil << std::endl;

    return 0;
}

// Definisi fungsi untuk menghitung faktorial
unsigned long long hitungFaktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * hitungFaktorial(n - 1);
    }
}



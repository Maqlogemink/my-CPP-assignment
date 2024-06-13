# include <bits/stdc++.h>
using namespace std;


int main(){
    /*
    Penyortiran adalah masalah desain algoritma yang mendasar. Banyak algoritma yang efisien
gunakan pengurutan sebagai subrutin, karena seringkali lebih mudah memproses data jika
elemen berada dalam urutan yang terurut.

Misalnya, masalah “apakah sebuah array berisi dua elemen yang sama?” gampang
untuk menyelesaikannya menggunakan pengurutan. Jika array berisi dua elemen yang sama, keduanya akan menjadi elemen berikutnya
satu sama lain setelah disortir, sehingga mudah untuk menemukannya. Juga, masalahnya ”apa adanya
elemen yang paling sering muncul dalam sebuah array?” dapat diselesaikan dengan cara yang sama.

Ada banyak algoritma untuk pengurutan, dan mereka juga merupakan contoh yang bagus
bagaimana menerapkan teknik desain algoritma yang berbeda. Penyortiran umum yang efisien
algoritma bekerja dalam waktu O(nlogn), dan banyak algoritma yang menggunakan pengurutan sebagai a
subrutin juga memiliki kompleksitas waktu ini.

    
    */

   // misalkan sebuah array mengandung n elemen, tugasmu ialah 
   // memilah elemen dalam urutan angka naik

   int n = 6;
   int arr [n];

   for(int i = 0; i < n; ++i){
    cin >> arr[i];
   }

   for(int j = 0; j < n; ++j){
    for(int k = 0; k < j-1; ++k){
        if(arr[k] > arr[k+1]){
            swap(arr[k],arr[k+1]);
        }
    } 
   }

    for(int itr = 0; itr < n; ++itr){
    cout << arr[itr] <<", ";
   }







}
/*
                                MEMORY ALLOCATION 
    
    ~ Static Memory 
      Memory yang dialokasikan / ditentukan saat program dicompile 

      memori yang sudah dialokasikan bersifat tetap dan tidak dapt ditambah
      ataupun dikurang disaat program berjalan 

    contoh :

      int arr[5] = {1,2,3,4,5};

    ~ Dynamic Memory (heap/stack)
      Memory  yang dialokasikan saat program dijalankan 
      stack merupakan memori dinamis yang bersusun / berurutan
      tidak seperti stack dimana memory dialokasikan dalam urutan, 
      heap adalah sebuah area memory diamana memori dialokasikan 
      tanpa urutan tertentu atau acak

      untuk mengakses memori dinamis dibutuhkan pointer 

      terdapat built-in functions pada c++ untuk mengalokasikan
      memori dinamis yaitu :
      1. new 
      2. delete 

      contoh :

*/


# include <iostream>
# include <stdlib.h>
using namespace std;

int main(){
    
    int *p; // deklarasi variabel
    p = new int; // alokasi variabel pada heap memory
    *p = 90; // inisialisasi variabel 
    cout << *p << endl; //mengakses memory heap
    delete p; // menghapus memory heap

    int *z; // deklarasi variabel
    z = new int[20]; // alokasi variabel array pada heap memory
    for(int i = 0; i < 15; ++i){
        *(z + i) += i; //menambahkan nilai array pada variable
        cout << *(z + i) << endl; // mengakses memory sebagai output
    }

}
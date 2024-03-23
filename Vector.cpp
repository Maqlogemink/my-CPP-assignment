# include <iostream>
# include <vector>
using namespace std;

int main(){ 
    /*
    ========================VECTOR===================

    Vector adalah array dinamis yang ukuran data yang dapat disimpan selalu berubah 
    */

     // mendeklarasikan vector 
    vector<int> v1 {1,2,3,4,5,6,7};
    // mencetak nilai didalam vector sesuai urutannya 
    v1[2];
    // mencetak nilai awal dari vector 
    v1.front(); 
    // mencetak nilai akhir dari vector 
    v1.back();
    // banyak elemen yang ditampung dari sebuah vector
    v1.size();
    // menambah nilai vector dari urutan paling belakang 
    v1.push_back(8); // data didalam vector bertambah satu yaitu angka 8
    
    // mengetahui daya tampung dari sebuah vector
    // vector akan melipatgandakan daya tampungnya jika elemen yang disimpan sudah penuh 
    v1.capacity(); 

    // menghilangkan elemen terahir pada vector 
    v1.pop_back();
    // membuat daya tampung vector sama dengan banyak elemen pada vector 
    v1.shrink_to_fit();

    // menyisipkan elemen pada urutan tertentu 
    v1.insert(v1.begin(), 0); // menyisipkan angka 0 pada urutan awal vector 
    v1.insert(v1.end(), 9); // menyisipkan angka 9 pada urutan akhir vector 

    // melakukan perulangan pada vector 
    for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << endl;
    }










}
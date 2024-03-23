# include <iostream>
using namespace std;

int main(){
    // MUTIDIMENSIONAL ARRAY

    /* Multidimensional array adalah sebuah array didalam array 

    untuk mendeklarasikan sebuah multidimensional array, nyatakan tipe varibel
    tulis nama dari varibel diikuti kurung siku untuk menentukan banyak element didalam array utama
    diikuti kurung siku lainnnya untuk menentukan banyak elemen dari sub - array 
    */

   // Contoh :

   string vegan [3][3] =
   { 
    {"Beras","Jagung","Ubi Jalar"},
    {"Mangga","Durian","Jambu"},
    {"Sawi","Kangkung","Kol"} 
   };

    // cara mengakses item dalam multidimensional array 
   cout << "Buah yang mempunyai bau yang menyengat adalah : " << vegan [1][1] << endl;

   // looping pada multidimensional array 
   for (int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cout << vegan[i][j] << endl;
    }
   }




   
   


   
   
}
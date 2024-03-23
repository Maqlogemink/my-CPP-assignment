# include <iostream>
using namespace std;
/* 
            STATIC VARIABLES
variabel statis digunakan untuk mempertahankan nilai variabel
variabel statis disimpan di penyimpanan statis
*/

int setor(){

    static int nominal_str,bunga; 
    nominal_str += 200000;
    bunga += 5000; 
    int total_uang = nominal_str + bunga;
    return total_uang; 
    
}



int main(){



   
    cout << setor() << '\n';
    cout << setor() << '\n';
    cout << setor() << '\n';
    





}
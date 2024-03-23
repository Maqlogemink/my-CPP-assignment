# include<iostream>
using namespace std;

int main(){

    // hitung bilangan genap dari 10 sampai 20 
    for(int n = 10; n <= 20; n += 2 ){
        cout << n << " ";
    }
    // hitung mundur bilangan genap dari 10 sampai 20 
    for(int m = 20; m >= 10; m -= 2 ){
        cout << m << " ";
        cout << endl;
    }

    // perulangan bersarang 

    // outer loop 
    for (int i = 1; i <= 5 ; i++ ){
        cout << "outer : "<< i <<"\n";

        // inner loop 
        for (int n = 0 ; n <= 5 ; ++n){
            cout << "inner : "<< n << "\n";
        } 

    }

    // foreach loop 
    // perulangan yang dilakukan pada sebuah array 
    int angka[7] = {100, 90, 80, 70, 60, 50, 40};
    for (int z :angka ){
        cout << z << "\n";
    }


    // Break and Continue For Loop

    // Jika perulangan melewati angka 10, perulangan terhenti 
    int mj;
    for(mj = 0; mj < 20; mj++){
        if(mj >= 10){
            break;
        }
    }

    // Jika perulangan sama dengan 20, perulangan tidak mencetak angka 20
    int rg;
    for(rg = 0; rg < 50; mj++){
        if(rg == 20){
            continue;
        }
    }


    return 0;

    
}
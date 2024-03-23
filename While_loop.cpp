# include<iostream>
using namespace std;


int main(){
    // While loop melakukan perulangan selama kondisi didalamnya terpenuhi:

    int  i = 0;
    while (i < 20){
        cout << i << '\n';
        i++;
    }

    // Do / While Loop 
    // merupakan varian dari while loop. perulangan ini akan mencetak kondisi sekali
    // sebelum mengecek kondisinya apakah benar, lalu akan berulang selama kondisinya benar 
    int z = 50;
    do{
        cout << z << '\n';
        z++;
    }
    while (z < 70);

    // break dan continue pada While Loop 

    // hentikan perulangan jika melewati angka 8
    int n = 0;
    while ( n < 12){
        cout  << n << '\n';
        n++;
        if( n == 8){
            break;
        }
    }

    // lompat ke angka selanjutnya jika melewati angka 8
    int k = 0;
    while (k < 15){
        cout << k << '\n';
        k++;
        if (k == 8){
            continue;
        }
    }

    // While loop bersarang 
    int x = 0;
    do {
        cout << "outer : " << x << '\n';
        x++;
        cout << endl;
        int y = 10;
        while (y < 20)
        {
            cout << "inner : "<< y << '\n';
            y++;
        }
    } while (x < 5);






        
}
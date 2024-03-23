# include <iostream>
# include <conio.h>
using namespace std;


int main (){

// membuat program mencetak bilangan prima 

    int angka, jumlah,i;

    // variabel jumlah menyimpan banyak faktor dari bilangan yang ingin kita tentukan apakah bilangan itu prima atau tidak 
    

 cout<<"Masukan Bilangan : ";
 cin>>angka;

 jumlah=0;
 for (i=1;i<=angka; i++) // variabel i mengalami perulangan sebanyak variabel angka 
     if (angka%i==0){ // sisa dari hasil pembagian variabel angka dengan variabel i. jika variabel angka habis dibagi variabel i, maka variabel jumlah bertambah 1 
           jumlah++; 
     }
     if(jumlah==2){ // bilangan prima hanya mempunyai 2 faktor, jika lebih dari 2 maka bukan bilangan prima 
           cout<< angka << " Merupakan Bilangan Prima \n";
     }
     else{
           cout<< angka << " Bukan Bilangan Prima \n";
     }
 return 0;
    



    
}
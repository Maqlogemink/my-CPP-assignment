# include<iostream>
# include<string>
using namespace std;


void myArray(int angka[100], int banyak_data){

    for(int i = 0; i < banyak_data; i++){
        cout <<"Masukkan elemen ke - " << i+1 <<" : "; cin >> angka[i];
    }
    
    cout << endl;

    for(int j = 0; j < banyak_data; j++){
        cout <<"Elemen ke - " << j+1 <<" : " << angka[j] << endl;
        
    }
}


int main(){
    
    int elemen;
    cout <<"masukkan banyak elemen pada array : "; cin >> elemen;

    int x [elemen];
    
    if(elemen <= 100){
        myArray(x,elemen);
    }
    else{
        cout <<"Tidak dapat lebih dari 100";
        return 1;
    }


   
}
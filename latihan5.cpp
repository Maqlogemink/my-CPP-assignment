# include <iostream>
# include <cmath>
using namespace std;

int main(){

int n,m; 
cout <<"Masukkan Dimensi Pertama: "; 
cin >> n;
cout <<"Masukkan Dimensi Kedua: ";
cin >>m;
int array_pertama[n][m];
int array_kedua[n][m];

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout <<"Masukkan array indeks ke [" << i+1 <<"]["<< j+1 <<"] \n"; 
        cin >> array_pertama[i][j];
    }
cout << endl;
}

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout <<"Masukkan array indeks ke [" << i+1 <<"]["<< j+1 <<"] \n"; 
        cin >> array_kedua[i][j];
    }
cout << endl;
}

int array_ketiga[n][m];

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        int array_ketiga [n][m]= {array_pertama[n][m] + array_kedua[n][m]};        
    }
}

cout << "Penjumlahan array pertama dan kedua adalah : ";

for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        cout << array_ketiga[n][m] <<endl;

    }
cout << endl;    
}




    
    

    











    return 0;
}
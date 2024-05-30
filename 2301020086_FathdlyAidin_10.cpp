#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int main(){

    ifstream fin;
    string line, text;
    fin.open("Data.csv");
    while(getline(fin,line)){
        stringstream str(line);
        while(getline(str,line,';')){
            cout << line <<" | " ;

        }
        cout << endl;
        
    }

    fin.close();


    ofstream fout;
    int n;
    string Nama[n], Nomor_Induk[n], Alamat[n];
    fout.open("Data.csv");
    cout <<"Masukkan banyak data yang ingin diinput : "; cin >> n;
    for(int i = 0; i < n; ++i){
        cin.ignore(0x7fffffff,'\n');
        cout <<"Nomor Induk : "; getline(cin,Nomor_Induk[i]);    
        cout <<"Nama : "; getline(cin,Nama[i]);
        cout <<"Alamat : "; getline(cin,Alamat[i]);

        system("pause"); 
       
    }


    for(int j = 0; j < n; ++j){

        fout << endl;
        
        fout << Nama[j] <<';'<< Nomor_Induk[j] <<';'<< Alamat[j]; 
        fout << endl;
    }






    


    fout.close();


    
    system("pause");

    return 0; 
    

    
    



 

}
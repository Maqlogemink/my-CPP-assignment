# include <iostream> 
# include <stdio.h>
using namespace std;

class hewan{ // class induk 
    virtual void kemampuan(int jarak){ // jika class turunan tidak memiliki method "kemampuan", maka method class induk berjalan
        cout <<"bisa bergerak sejauh "<< jarak << endl;
        }
};

class Kucing : public hewan{ // class Kucing merupakan turunan dari class hewan
     public: // Access identifiers diatur public agar object bisa mengakses attribute
        int kaki = 4; // inisialisasi attribute kaki
        void kemampuan(int jarak){ // Method jarak yang mampu ditempuh 
            cout <<"Bisa berlari sejauh "<< jarak <<" m "<< endl;
        }
};

class Burung : public hewan{ // class Burung merupakan turunan dari class hewan
    public: // Access identifiers diatur public agar object bisa mengakses attribute
        int sayap = 2;// inisialisasi attribute sayap
        void kemampuan(int jarak){
            cout <<"Bisa Terbang Sejauh " << jarak <<" m"<< endl;
        }
};


int main(){

    Kucing kucing1; // inisialisasi object
    Burung burung1; // inisialisasi object

    hewan* k = &kucing1; // object k pointer dari object kucing1
    hewan* b = &burung1; // object b pointer dari object burung1

    cout <<"Kaki kucing : "<< kucing1.kaki << endl; 
    kucing1.kemampuan(3);// pemanggilan method
    
    cout <<"Sayap burung : "<< burung1.sayap << endl; 
    burung1.kemampuan(5);// pemanggilan method


}
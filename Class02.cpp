# include <iostream>
using namespace std; 

/*
CLASS METHODS

Methods adalah fungsi yang terdapat didalam sebuah class

ada 2 cara untuk mendefenisikan fungsi yang terdapat pada class
    ~ Didalam Class 
    ~ Diluar Class
    
Pada contoh dibawah, kita mendefenisikan sebuah fungsi didalam class dan
kita namai dengan "myMethod" */

class Lyrics {
    public:
        void Phonk(){
            cout <<"DOOM SHOOT MADAFAKA \n";
        }
        void Metal();
};

/*
Agar bisa mendefenisikan sebuah fungsi diluar class, kamu harus mendeklarasikannya di dalam class 
dan defenisikannya di luar kelas. Ini dilakukan dengan menulis nama dari class, diikuti dengan titik dua ganda 
dan terakhir nama dari fungsi tersebut 
*/

void Lyrics :: Metal() {
    cout << "Hell Yeah!!";
}

int main(){

    Lyrics freddie_dredd;
    freddie_dredd.Phonk();

    Lyrics Metallica;
    Metallica.Metal();
    







    return 0;
}
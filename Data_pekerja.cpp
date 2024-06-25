# include "Deklarasi_projek.h"
# include "Defenisi_projek.cpp"
# include <iostream>


class Pengembang : public Karyawan {

    void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai pengembang perangkat lunak" << endl;;
    }

};

class Pemasaran : public Karyawan {

     void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai pemasar produk frozen food" << endl;;
    }


};

class Keuangan : public Karyawan {

     void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai pengatur keuangan perusahaan" << endl;;
    }


};

class Peneliti : public Karyawan {

    
     void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai peneliti teknologi pangan perusahaan" << endl;;
    }



};

int main () {



    Peneliti peneliti01;

    peneliti01.SetNamaKaryawan("Jayadi");
}
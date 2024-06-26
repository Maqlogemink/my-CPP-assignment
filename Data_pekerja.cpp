# include "Deklarasi_projek.h"
# include "Defenisi_projek.cpp"
# include <fstream>
# include <sstream>
# include <iostream>
# include <vector>


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

    public:
     void Jobdesc () {
        cout << NamaKaryawan << " pada departmen " << NamaDept << " Sebagai peneliti teknologi pangan perusahaan" << endl;;
    }



};
bool readCSV(const string& filename, Peneliti& peneliti) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Tidak bisa membuka file tersebut!" << endl;
        return false;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string nama, jabatan, gaji, umur, lamaBekerja, jenisKelamin;

        getline(ss, nama, ';');
        getline(ss, jabatan, ';');
        getline(ss, gaji, ';');
        getline(ss, umur, ';');
        getline(ss, lamaBekerja, ';');
        getline(ss, jenisKelamin, ';');

        peneliti.SetNamaKaryawan(nama);
        peneliti.SetJabatan(jabatan);
        peneliti.SetGaji(stoi(gaji));
        peneliti.SetUmur(stoi(umur));
        peneliti.SetLamaBekerja(stoi(lamaBekerja));
        peneliti.SetJenisKelamin(jenisKelamin[0]);
        
    }

    file.close();
    return true;
}




int main () {

    Pengembang pengembang01;
    Pemasaran pemasaran01;
    Keuangan keuangan01;
    Peneliti peneliti01;

      if (readCSV("data.csv", peneliti01)) {
        peneliti01.Jobdesc();
    } else {
        cout << "Gagal membaca data dari file CSV." << endl;
    }

    // peneliti01.SetNamaKaryawan("Jayadi");
    // peneliti01.SetJabatan("Peneliti");
    // peneliti01.SetGaji(2000000);
    // peneliti01.SetUmur(25);
    // peneliti01.SetLamaBekerja(3);
    // peneliti01.SetJenisKelamin('M');

    
    
}

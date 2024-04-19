#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definisi class Kapal
class Kapal { 
private:
    string nama; // Nama kapal yang akan berlabuh 
    vector<string> tujuan; // Tujuan berlabuh kapal 
    vector<string> jadwal; // Jadwal kapal berlabuh 

public: 
    Kapal(string _nama, vector<string> _tujuan, vector<string> _jadwal)  // Konstruktor class Kapal
    : nama(_nama), tujuan(_tujuan), jadwal(_jadwal) {
        
    }  

    string getNama() const { // enkapsulasi atribut nama
        return nama;
    }

    vector<string> getTujuan() const { // enkapsulasi atribut tujuan 
        return tujuan;
    }

    vector<string> getJadwal() const { // enkapsulasi atribut jadwal 
        return jadwal;
    }
};

// Definisi class Pelabuhan
class Pelabuhan { 
private:
    vector<Kapal> kapal; // 

public:
    void tambahKapal(Kapal k) { // method memasukkan atribut ke vector kapal 
        kapal.push_back(k);
    }

    void tampilkanJadwal() const {
        cout << "Jadwal Keberangkatan Kapal di Pelabuhan Batam:\n";
        for (const auto& k : kapal) {
            cout << "Nama Kapal: " << k.getNama() << endl;
            cout << "Tujuan: ";
            for (const auto& t : k.getTujuan()) {
                cout << t << ", ";
            }
            cout << endl;
            cout << "Jadwal: ";
            for (const auto& j : k.getJadwal()) {
                cout << j << ", ";
            }
            cout << endl << endl;
        }
    }
};

int main() {
    // Membuat objek Pelabuhan
    Pelabuhan pelabuhanBatam;

    // Menambahkan kapal beserta jadwalnya
    vector<string> tujuanDumai = {"Tanjung Balai Karimun", "Selat Panjang", "Bengkalis", "Dumai"};
    vector<string> jadwalDumai = {"07.30 WIB", "08.15 WIB", "09.00 WIB", "10.00 WIB", "10.45 WIB", "11.30 WIB", "12.30 WIB", "13.15 WIB", "14.00 WIB", "15.00 WIB", "15.45 WIB", "16.00 WIB", "16.30 WIB", "17.00 WIB", "17.30 WIB"};
    Kapal mvDumaiLine8("MV Dumai Line 8", tujuanDumai, jadwalDumai);
    pelabuhanBatam.tambahKapal(mvDumaiLine8);

    vector<string> tujuanOceanna6 = {"Benan", "Rejai", "Sei Tenam", "Jago", "Daek Lingga"};
    vector<string> jadwalOceanna6 = {"11.00 WIB"};
    Kapal mvOceanna6("MV Oceanna 6", tujuanOceanna6, jadwalOceanna6);
    pelabuhanBatam.tambahKapal(mvOceanna6);

    vector<string> tujuanSuperJet15 = {"Cempa", "Dabo Singkep"};
    vector<string> jadwalSuperJet15 = {"11.30 WIB"};
    Kapal mvSuperJet15("MV Super Jet 15", tujuanSuperJet15, jadwalSuperJet15);
    pelabuhanBatam.tambahKapal(mvSuperJet15);

    vector<string> tujuanKaruniaJaya3 = {"Galang", "Moro", "Tanjung Balai Karimun"};
    vector<string> jadwalKaruniaJaya3 = {"13.00 WIB"};
    Kapal sbKaruniaJaya3("SB Karunia Jaya 3", tujuanKaruniaJaya3, jadwalKaruniaJaya3);
    pelabuhanBatam.tambahKapal(sbKaruniaJaya3);

    // Menampilkan jadwal keberangkatan kapal di pelabuhan Batam
    pelabuhanBatam.tampilkanJadwal();

    return 0;
}


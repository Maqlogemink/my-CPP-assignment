#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
using namespace std;



int main(){
    //Deklarasi file 
    fstream file ;
    //Membuka file berdasarkan alamat/nama file
    file.open("dataMhs.csv");
    //Deklarasi vector atau array dinamis yang ukuranya tidak ditentukan
    vector<string> namas;
    vector<string> nims;
    vector<int> hapus;

    string output,nim,nama;
    //Mengambil data yang ada dalam file baris per baris menggunakan fungsi getline
    while(getline(file,output)){
        //Substring fungsinya untuk mengambil sebagian dari isi string
        //Parameternya butuh indeks mulai dan panjangnya
        nim = output.substr( 0 , output.find(";") ) ;
        nama = output.substr( output.find(";")+1 );
        namas.push_back(nama);
        nims.push_back(nim);
    }

    //Menampilkan semua data yang ada dalam array
    for(int i=0; i < namas.size() ; i++){
        cout << "\nData ke-" << i+1 << endl;
        cout << "\tNIM : " << nims[i] << endl;
        cout << "\tNama : " << namas[i] << endl;
    }

    //Menyisipkan data ke dalam array
    namas.insert(namas.begin()+1,1,"Niko");
    nims.insert(nims.begin()+1,1,"00000000");

    //Menampilkan data baru pada indeks ke 1 atau data ke dua dengan nama Niko
    for(int i=0; i < namas.size() ; i++){
        cout << "\nData ke-" << i+1 << endl;
        cout << "\tNIM : " << nims[i] << endl;
        cout << "\tNama : " << namas[i] << endl;
    }
    
    //meminta ke user nomor data yang akan dihapus
    int jumlahHapus;
    cout << "\n\nMasukkan jumlah data yang ingin dihapus : " ; cin >> jumlahHapus;
    for(int i=0; i < jumlahHapus ; i++){
        int indeks; 
        cout << "\nMasukkan indeks data : ";cin >> indeks;
        hapus.push_back(indeks);
    }
    //Menampilkan data selain data yang ingin dihapus
    for(int i=0; i < namas.size() ; i++){
        bool lanjut = true;
        for(int j=0 ; j< hapus.size(); j++){
            if(hapus[j]==i+1) lanjut = false;
        }
        if(!lanjut) continue;
        cout << "\nData ke-" << i+1 << endl;
        cout << "\tNIM : " << nims[i] << endl;
        cout << "\tNama : " << namas[i] << endl;
    }

    //Pencarian data dalam arary  berdasarkan nim 
    string targetNIM = "";
    cout << "\nMasukkan NIM yang akan dicari : "; cin >> targetNIM;
    //Melakukan penelurusan ke semua data array
    for(int i=0; i < namas.size() ; i++){
        //Membandingkan apakah NIM pada data ke-i sesuai dengan kunci pencarian
        if(nims[i]==targetNIM){
            cout << "\nData ke-" << i+1 << endl;
            cout << "\tNIM : " << nims[i] << endl;
            cout << "\tNama : " << namas[i] << endl;
            break;
        }
    }

    //Tutup file setelah digunakan
    file.close();

    //Nulis data kedalam file csv
    fstream filebaru;
    filebaru.open("databaru.csv");
    for(int i=0; i < namas.size() ; i++){
        bool lanjut = true;
        for(int j=0 ; j< hapus.size(); j++){
            if(hapus[j]==i+1) lanjut = false;
        }
        if(!lanjut) continue;
        //Cout ke dalam file
        filebaru << nims[i] + ";" + namas[i] + "\n";
    }
    filebaru.close();

    return 0;
}


#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
using namespace std;


//Deklarasi file 
fstream file ;

//Deklarasi vector atau array dinamis yang ukuranya tidak ditentukan
vector<string> namas;
vector<string> nims;
vector<int> hapus;


void TampilkanData(){
    //Menampilkan semua data yang ada dalam array
    for(int i=0; i < namas.size() ; i++){
        cout << "\nData ke-" << i+1 << endl;
        cout << "\tNIM : " << nims[i] << endl;
        cout << "\tNama : " << namas[i] << endl;
    }
}


void tambahData(){
    string nama,nim;
    cout << "Tambah data baru  : \n";
    cout << "Masukkan nama :  "; cin >> nama;
    cout << "Masukkan nim : " ; cin >> nim;
    nims.push_back(nim);
    namas.push_back(nama);
    TampilkanData();
}

void hapusData(){
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

}

void cariData(){
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
}

int menu(){
    int pilihan ;
    cout << "\n\n1.Tambah data " <<endl;
    cout << "2.Hapus data"<<endl;
    cout << "3.Cari data"<<endl;
    cout << "4.Tampilkan data"<<endl;
    cout << "5.Keluar"<<endl;
    cout << "Pilih aksi atau menu : " ; cin >> pilihan;
    if(pilihan == 1) tambahData();
    else if(pilihan==2) hapusData();
    else if(pilihan==3) cariData();
    else if(pilihan==4) TampilkanData();
    else if(pilihan==5) return 0; 
    return menu();
}

int main(){
    //Membuka file berdasarkan alamat/nama file
    file.open("dataMhs.csv");

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

    menu();
    

    // //Menyisipkan data ke dalam array
    // namas.insert(namas.begin()+1,1,"Niko");
    // nims.insert(nims.begin()+1,1,"00000000");
    
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


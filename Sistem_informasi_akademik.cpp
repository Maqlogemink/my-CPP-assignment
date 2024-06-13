# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

class Dosen{
    protected :
        vector <string> NIP, Nama_dosen;
  
    public:
        Dosen(vector <string> __NIP, vector <string> __Nama)
        : NIP(__NIP), Nama_dosen(__Nama)
        {

        }

        vector <string> Get_NIP(){
            return NIP;
        }

        vector <string> Get_Nama_dosen(){
            return Nama_dosen;
        }


        void HapusDataDosen(string __NIP){
            auto it = find(NIP.begin(),NIP.end(),__NIP);

            if(it != NIP.end()){
                size_t indeks = distance(NIP.begin(),it);
                NIP.erase(NIP.begin() + indeks);
                Nama_dosen.erase(NIP.begin() + indeks);
            }

        }

        void CariDataDosen(string __NIDN){
            auto it = find(Nama_dosen.begin(), Nama_dosen.end(), __NIDN);

            if(it != Nama_dosen.end()){
                size_t idx = distance(Nama_dosen.begin(),it);

                cout <<"Nama Dosen Pengajar : " << Nama_dosen.at(idx) 
                     <<"NIP : " << NIP.at(idx) <<'\n';
            }
        }

        
        
};

class Matakuliah:public Dosen{
    protected:
        vector <string> Nama_MK,Kode_MK;
        vector <Matakuliah> DataMataKuliah;
    public:
        Matakuliah(vector <string> __NIP, vector <string> __Nama, vector <string> __NamaMK, vector <string> _KodeMK)
        : Dosen(__NIP,__Nama), Nama_MK(__NamaMK), Kode_MK(_KodeMK)
        {}

        vector <string> getNama_MK(){
            return Nama_MK; 
        }

        vector <string> getKode_MK(){
            return Kode_MK;
        }


        void InputDataMatakuliah(Matakuliah __Data){
            
            DataMataKuliah.push_back(__Data);

        }



};

class Mahasiswa{
    protected :
        vector <string> Nama_mhs,NIM;
 
    public:
        Mahasiswa(vector <string> __Nama, vector <string> __NIM)
         : Nama_mhs(__Nama), NIM(__NIM)
        {}

        vector <string> Get_NIM(){
            return NIM;
        }

        vector <string> Get_Nama_mhs(){
            return Nama_mhs;
        }

       
        void HapusDataMahasiswa(string __NIM){
            auto it = find(NIM.begin(),NIM.end(),__NIM);

            if(it != NIM.end()){
                size_t indeks = distance(NIM.begin(),it);
                NIM.erase(NIM.begin() + indeks);
                Nama_mhs.erase(Nama_mhs.begin() + indeks);
                Nama_MK.erase(Nama_mhs.begin() + indeks);
                Kode_MK.erase(Nama_mhs.begin() + indeks);
            }
            else {
                cout <<"Tidak ada data yang dihapus !!";
            }

        }



        void CariDataMahasiswa(string __NIM){
            auto it = find(Nama_mhs.begin(), Nama_mhs.end(), __NIM);

            if(it != Nama_mhs.end()){
                size_t idx = distance(Nama_mhs.begin(),it);

                cout <<"Nama Mahasiswa : " << Nama_mhs.at(idx) <<"NIM : " << NIM.at(idx) <<'\n';
            }
        }

};




class LIHS : public Matakuliah, public Mahasiswa{

public:



    void MenuUtama(){

        option :
            char pilihan;
            cout <<"Masukkan pilihan \n"<< "1. Hapus (h)\n 2. Input (i)\n 3. Cari (c)\n";
            cin >> pilihan;


            switch (pilihan){
            case 'h':
                char __pil;
                cout <<"Pilihan menghapus :\n 1.Mahasiswa(m)\n 2.Dosen(d)\n"; cin >> __pil;
                switch (__pil)
                {
                case 'm':

                    string del_mhs;
                    cout <<"Masukkan Nomor Induk Mahasiswa yang ingin dihapus :"; getline(cin,del_mhs);
                    HapusDataMahasiswa(del_mhs);

                    break;
                
                case 'd':
                    string del_dosen; 
                    cout <<"Masukkan Nomor Induk Mahasiswa yang ingin dihapus :"; getline(cin,del_dosen);
                    HapusDataDosen(del_dosen);

                    break;
                }
                
            
            break;
            case 'i':
                char pil__;
                cout <<"Pilihan input :\n 1.Mahasiswa(m)\n 2.Dosen(d)\n"; cin >> __pil;
                switch(pil__){
                    case 'm':

                        int banyak_mhs;

                        cout <<"Masukkan banyak mahasiswa : "; cin >> banyak_mhs;
                        for(int i = 0; i < banyak_mhs; ++i){
                            string Namamhs, NIMmhs;
                            cout <<"Nama mahasiswa ke - " << i+1 <<'\n'; getline(cin,Namamhs);
                            cout <<"NIM mahasiswa ke - " << i+1 <<'\n'; getline(cin,NIMmhs);
                            Nama_mhs.push_back(Namamhs);
                            NIM.push_back(NIMmhs); 
                        }


                        break;
                    
                    case 'd':
                        
                        int banyak_dosen;

                        cout <<"Masukkan banyak mahasiswa : "; cin >> banyak_dosen;
                        for(int i = 0; i < banyak_dosen; ++i){
                            string Namadsn, Nipdosen;
                            cout <<"Nama mahasiswa ke - " << i+1 <<'\n'; getline(cin,Namadsn);
                            cout <<"NIM mahasiswa ke - " << i+1 <<'\n'; getline(cin,Nipdosen);
                            Nama_dosen.push_back(Namadsn);
                            NIP.push_back(Nipdosen); 
                        }
                        break;
                }
                break;

            case 'c':

                char pil__;
                cout <<"Pilihan mencari :\n 1.Mahasiswa\n 2.Dosen\n"; cin >> pil__;
                switch(pil__){
                    case 'm' : 
                        string CariNimMhs;

                        cout << "Masukkan nomor induk mahasiswa yang ingin dicari : "; getline(cin,CariNimMhs);

                        CariDataMahasiswa(CariNimMhs);

                        break;
                    
                    case 'd':

                        string CariNipDosen;

                        cout << "Masukkan nomor induk pegawai yang ingin dicari : "; getline(cin,CariNipDosen);

                        CariDataDosen(CariNipDosen);

                        break;
                }


            break;


            default:

                cout << "pilihan anda tidak valid ";

                goto option;

        }
    }
    

};


int main(){



    LIHS Teknik_informatika; 

    Teknik_informatika.MenuUtama();

    





}




    








# include <iostream>
using namespace std; 

void convertMinutes(double Minutes){

    cout <<"Menit ke Detik : "<< (Minutes *= 60) <<" Detik "<<endl; 
    cout <<"Menit ke Jam : "<< (Minutes /= 60) <<" Jam "<<endl; 
    cout <<"Menit ke Hari : "<< (Minutes /= 1440) <<" Hari "<<endl; 
}

void convertSeconds(double Seconds){
    cout <<"Detik ke Menit : "<< (Seconds /= 60)<<" Menit "<<endl; 
    cout <<"Detik ke Jam : "<< (Seconds /= 3600) <<" Jam "<<endl;
    cout <<"Detik ke Hari : "<< (Seconds /= 86400) <<" Hari "<<endl;
}

void convertDays (double Days){
    cout <<"Hari ke Jam : "<< (Days *= 24) <<" Jam "<<endl; 
    cout <<"Hari ke Detik : "<< (Days *= 86400) <<" Detik "<< endl;
    cout <<"Hari ke Menit : "<< (Days *= 3600) <<" Detik "<<endl; 
}

void convertHours(double Hours){
    cout <<"Jam ke Menit : "<< (Hours *= 600) <<" Menit "<<endl; 
    cout <<"Jam ke Detik : "<< (Hours *= 3600) <<" Detik "<< endl; 
    cout <<"Jam ke Hari :"<< (Hours /= 24) <<" Hari "<<endl;
}

int main(){

    double menit, detik, jam, hari;
    int pilihan;
    char menuutama;
    

   while (true)
   {
        cout <<"\t PROGRAM KONVERSI SATUAN WAKTU \t" <<endl; 
        cout <<"Silahkan Pilih Waktu Yang Ingin Dikonversikan \n" 
        <<"1. Menit \n"
        <<"2. Detik \n"
        <<"3. Jam \n"
        <<"4. Hari \n";

        cin >> pilihan;

        switch (pilihan){
        case 1:
            cout<<"Masukkan berapa menit : "; cin >> menit;
            convertMinutes(menit);
            break;

        case 2:
            cout<<"Masukkan berapa detik : "; cin >> detik; 
            convertSeconds(detik);
            break;
        
        case 3:
            cout<<"Masukkan berapa jam : "; cin >> jam;
            convertHours(jam);
            break;
        
        case 4:
            cout<<"Masukkan berapa hari : "; cin >> hari;
            convertDays(hari);
            break;
        default:
            cout <<"Pilihan anda tidak valid !!";

            break;
        }


        cout <<"Kembali ke menu utama (y/n) : "; cin >> menuutama;

        if(menuutama == 'n'){
            break;
        }
   }
   
    
    return 0; 
}
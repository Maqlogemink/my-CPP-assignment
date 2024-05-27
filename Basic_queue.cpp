# include<iostream>
using namespace std;
# define max 5

struct fifo{
    string Nama_buah[max];
    int posisi = 0;
    
    bool isFull(){
        if(posisi >= max){
            return true;
            
        }
        else{
            return false;
            
        }
    }
    
    
    bool isEmpty(){
        
        if(posisi == 0){
            return true;
        }
        else{
            return false;
        }
        
        
    }
    
    void view(){
        if(!isEmpty()){
            cout <<"Data antrian : "<< endl;
            for(int it = posisi - 1; it >= 0; --it){
                cout << it+1 <<". "<< Nama_buah[it] <<" | ";
                
            }
            cout << endl;
        }
        else{
            cout <<"Data antrian kosong"<<'\n';
        }
    }
    
    
    void enqueue(){
        if(!isFull()){
            cout <<"Masukkan data : ";
            cin >> Nama_buah[posisi];
            posisi++;
        }
    }
    
    void dequeue(){
        if(!isEmpty()){
            for(int it = 0; it < posisi -1; ++it){
                Nama_buah[it] = Nama_buah[it+1];
                
            }
            posisi--;
        }
    }
    
    
    
    
    
    
};

int main(){
    string temp;
    char pilihan;
    
    fifo Pasokan_buah;
    
    queue : 
        
        system("cls");
        Pasokan_buah.view();
        cout <<"Menu Utama :\n (e).Enqueue\n (d).Dequeue\n ";
        cin >> pilihan; 
        
    
    
    switch(pilihan){
        case 'e' :
            
            system("cls");
            Pasokan_buah.enqueue();
            goto queue;
        case 'd' :
        
  
            system("cls");
            Pasokan_buah.dequeue();
            goto queue;
        default :
        
            break;
        
        
        
        
        
    }
    
    
    
    
}
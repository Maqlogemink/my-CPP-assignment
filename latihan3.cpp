# include <iostream>
using namespace std;

// Program mencetak deret fibonacci 
int main(){
    int x, r1 = 0, r2 = 1, r3 = 0;
    cout << "Masukkan Jumlah Deret yang diinginkan : " << endl;
    cin >> x;
    for(int i  = 1; i <= x; i++){

        if(i == 1){
            cout << r1 << " ";
            continue;
        }
        if(i == 2){
            cout << r2 << " ";
            continue;
        }
        
        r3 = r1 + r2;
        r1 = r2; 
        r2 = r3;

        cout << i << " ";
    }
    cout << endl;
    return 0;




}
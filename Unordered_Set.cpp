# include <bits/stdc++.h>
# include <unordered_set>
using namespace std;


int main(){

    // FUNGSI - FUNGSI YANG TERDAPAT PADA UNORDERED SET 
    
    // insert() 
    // berfungsi untuk memasukkan key kedalam unordered set

    unordered_set<int> mn; 
    mn.insert(2);
    mn.insert(3);
    mn.insert(4);
    mn.insert(5);
    mn.insert(6);

    for(auto it = mn.begin(); it != mn.end(); ++it){
        cout << (*it) << endl; 
    }

    // size()
    // berfungsi untuk menampilkan size unordered set

    cout <<"banyak element : " << mn.size() << endl;

    // find()
    // mencari key tertentu pada unordered set 

    int z = 4;
    if(mn.find(z) == mn.end()){
        cout << "key tidak ditemukan" <<'\n';
    }
    else {
        cout << "key ditemukan"<<'\n';
    }

    // erase()
    // menghapus key tertentu pada unordered set 

    int erase = 6;
    mn.erase(erase);

    for(auto itr = mn.begin(); itr != mn.end(); ++itr){
        cout << (*itr) << endl;
    }

    // count()
    // berfungsi mencari key pada unordered set secara langsung 

    if(mn.count(4)){
        cout <<"element is found " <<'\n';
    }
    else{
        cout <<"element is not found "<<'\n';
    }

    // clear()
    // berfungsi untuk menghapus semua element yang terdapat pada unordered set 

    mn.clear();





}
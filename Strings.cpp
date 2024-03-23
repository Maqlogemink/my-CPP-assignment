# include <iostream>
# include <string>
using namespace std;

int main(){

    // string biasanya digunakan untuk menyimpan data teks
    // Sebuah variabel string mengandung koleksi karakter yang diapit oleh tanda petik ganda " "
    string kota = "Tanjungpinang";
    // untuk menggunakan string, kalian harus memasukkan file header tambahan di source sode 
    // <string>

     // mrnggabungkan string (concentenation)
     // operator + bisa digunakan diantara string untuk menambah merekan menjadi satu string.
     // atau biasa disebut dengan concatenation 

    string namadepan = "Fadli";
    string namabelakang = "Aidin";
    string namalengkap = namadepan + namabelakang;
    cout << namalengkap <<endl;

    // kalian juga bisa menggabungkan string dengan append() function 
    string nickname = "wraithrancher";
    string role = "mage";
    string title = nickname.append(role);
    cout << title <<endl;

    // angka yang diberi tanda petik ganda akan dianggap sebagai string 
    // oleh karena itu operator + tidak menjumlahkan kedua angka melainkan menggabungkannya saja 

    string a = "90";
    string b = "12";
    string c = "54";

    string d = a + b + c;
    cout << d << endl;
    // string tidak akan pernah bisa ditambahkan dengan angka (int,float,long,double)
    // contoh 
    // string x = "10";
    // int y = 12;
    // string z = x + y;
    // akan menampilkan error 


    // Untuk menampilkan panjang string, gunakan length() function:
    string sandi = "BANANATERRACOTTAPIE";
    cout << "Panjang string sandi adalah : " << sandi.length() << endl;
    // bisa juga menggunakan size() function :
    cout << "Panjang string sandi adalah : " << sandi.size() << endl;

    // Untuk mengakses karakter pada sebua string berdasarkan nomor indexnya gunakan kurung petak []
    cout << sandi [5];
    // output A 
    sandi[16] = 'T';
    cout << sandi;

    // Karakter Istimewa 
    // untuk menampilkan tanda petik, tanda petik ganda, dan garis miring saat output telah dicetak
    // menggunakan karakter istimewa yaitu : 
    // (\') untuk menampilkan tanda petik, (\") untuk menampilkan tanda petik ganda, (\\) untuk menampilkan garis miring

    cout << "nama gadis itu adalah \'Rinjani\'"<<endl;
    cout << "\"Pergi kau sana\" adalah kata yang terakhir ia ucapkan padaku " <<endl;
    cout << " aku \\ kau salah satunya akan menjumpai ketua kelas "<<endl;

    // Karakter Istimewa lainnya adalah \n untuk baris baru dan \t untuk tab

    string username,password;
    cout << "Masukkan username anda : ";
    cin >> username;
    cout << "Masukkan password anda : ";
    cin >> password;

    string login;
    cout << "Username anda adalah : " << username <<'\n'<<"Password anda adalah : "<< password <<endl;
    cout << "tekan apapun untuk login : " ;
    cin >> login;



}

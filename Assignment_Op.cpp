# include <iostream>
# include <string>
using namespace std;

int main(){
    // ASSIGNMENT OPERATORS 
    // Assignment Operators digunakan untuk memasukkan nilai ke variabel
    // pada contoh dibawah, kita biasa menggunakan assignment operator (=) untuk 
    // memasukkan nilai 10 kedalam variabel bernama x :

    int x = 10;

    // addition assignment operator (+=) menambah sebuah nilai kedalam variabel:

    int n = 20 ;
    n += 20 ;

    // assignment operator lain :

    double m = 20 ;
    m -= 5;

    double o = 20;
    o *= 5;

    double p = 20;
    p /= 2;

    int q = 20;
    q %= 3;

    int r = 20;
    r &= 5;
    
    int s = 20;
    s |= 5;
    
    int t = 20;
    t ^= 5;
    
    int u = 20;
    u >>= 5;
    
    int v = 20;
    v <<= 5;

    
    cout << m <<'\n';
    cout << o <<'\n';
    cout << p <<'\n';
    cout << q <<'\n';
    cout << r <<'\n';
    cout << s <<'\n';
    cout << t <<'\n';
    cout << u <<'\n';
    cout << v <<'\n';

    


    return 0;

}
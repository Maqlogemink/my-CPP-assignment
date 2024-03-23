// C++ mempunyai banyak functions yang membuat kalian bisa melakukakn perhitungan matematika pada angka 


# include <iostream>
# include <cmath>
using namespace std;
/* FILE HEADER MATH <cmath>
   Didalam file header math terdapat banyak function yang mendukung perhitungan matematika 
   seperti sqrt(square root), round(membulatkan nomor),dan log(logaritma) 
*/


int main(){

    // max(x,y) function bisa digunakan untuk menemukan nilai tertinggi antara x dan y :
    // contoh 
    cout << max(0.4,double(-9)) << '\n';
    // min(x,y) function bisa digunakan untuk menemukan nilai terendah antara x dan y :
    // contoh 
    cout << min(0.4,double(-9)) << '\n';
    // sqrt() function bisa digunakan untuk mencari akar pangkat dari suatu angka
    cout <<sqrt(256)<< '\n';
    // round() function digunakan untuk membulatkan bilangan ke bilangan yang lebih besar
    cout <<round(12.7)<< '\n';
    // log() function digunakan untuk mencari logaritma dari suatu bilangan
    cout << log(256) << '\n';


    /*
    Masih banyak lagi function yang mendukung perhitungan matematika seperti :
    abs(x),acos(x),asin(x),atan(x),cbrt(x),ceil(x),cos(x),
    cosh(x),exp(x),expm1(x),fabs(x),fdim(x,y),floor(x),hypot(x,y)
    fma(x,y,z),fmax(x,y),fmin(x,y),fmod(x,y),pow(x,y),sin(x),sinh(x)
    tan(x),tanh(x)
    */


    return 0;
}
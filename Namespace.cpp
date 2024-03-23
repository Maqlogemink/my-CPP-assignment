#include <iostream>
namespace X{
    int angka = 20; 
}
namespace Y{
    int angka = 90;

}

int main() {

// Namespace = menyediakan solusi untuk mencegah name confilcts 
//             di projek besar. setiap variabel mempunyai nama yang unik 
//             sebuah namespace memperbolehkan programmer untuk memberi nama yang identik
//             selama namespacesnya berbeda.

    using namespace X;
    
    std:: cout << angka << '\n';

    std:: cout << Y :: angka;


   return 0;



}
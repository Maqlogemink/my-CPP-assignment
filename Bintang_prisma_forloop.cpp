# include <iostream>
using namespace std;
 
int main()
{
  cout << "====Program C++ Belah Ketupat Bintang====" << endl;
  cout << "=========================================" << endl;
  cout << endl;
 
  int lebar_prisma,x ,y ,z;
 
  cout << "Input lebar prisma: ";
  cin >> lebar_prisma;
 
  for(x=1;x<=lebar_prisma;x++) { // bagian atas bintang 
 
    for(y=1;y<=lebar_prisma-x;y++) { // mencetak bagian yang kosong 
      cout << "   ";
    }
 
    for(z=1;z <= x * 2 - 1 ; z++) { // mencetak bagian yang berisi 
      cout << " * ";
    }
    cout << endl;
  }
 
  for(x = lebar_prisma - 1; x >= 1; x--) { // bagian bintang 
 
    for(y = 1; y <= lebar_prisma - x ; y++) { // mencetak bagian yang kosong
      cout << "   ";
    }
 
    for(z = 1; z < x * 2 - 1  ;z++) { // mencetak bagian yang berisi
      cout << " * ";
    }
    cout << endl;
  }


 
  
    

    return 0;
}
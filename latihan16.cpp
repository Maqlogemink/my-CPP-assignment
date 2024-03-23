# include <iostream>
# include <conio.h>
using namespace std;


int _num_(int &num1, int &num2){
  int num3;
  cout <<"Masukkan nilai z : "; cin >> num3;
  num2 *= num3;
  num1 += num2;

  return num2, num1;



}


int main(){

  
  int x , y;

  cout <<"Masukkan nilai x : "; cin >> x;
  cout <<"Masukkan nilai y : "; cin >> y;

  int hasil = _num_(x,y);

  cout <<"Nilai x  : "<< x <<endl; 
  cout<<"Nilai y : "<< y <<endl; 

  cout << hasil <<endl;


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  return 0; 
}
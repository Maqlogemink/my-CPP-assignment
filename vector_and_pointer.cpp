#include <iostream>
#include <vector> 
#include <string>
using namespace std;

vector <int> pointing(vector <int> * num){
    
    // pushback dan popback vector pointer 
    num->push_back(12);
    num->pop_back();
    
    // mencetak element ketiga pada vector 
    cout << num->at(3) << endl;
    
    // pointing vector pada vector pointer 
    vector <int> ** num_ptr = &num;
    
   for(int x : *num){
       cout << x << endl;
   } 
   
   for(int y : **num_ptr){
       cout << y << endl;
   }
   
   return *num;
  
}



int main() {


    vector <int> domain = {2,4,6,8,10};
    pointing(&domain);

    


    
    return 0;
}
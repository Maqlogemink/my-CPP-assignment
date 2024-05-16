# include <iostream> 
# include <vector>
using namespace std;



int main(){

    vector <int> arr;

    for (int i = 0; i < 10; i++)
    {
        arr.push_back(i);
             
    }

    for (int j = 10; j > 0; j--)
    {
        cout << arr[j];     
           
    }
    
    for (int k = 0; k < 10; k ++){

        arr.pop_back(k);

    }


    
    
    

   



}
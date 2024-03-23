# include <iostream>
using namespace std;

int fibonacci(int x){
    if(x == 0 || x == 1){
        return x;
    }
    else{
        return (fibonacci(x -1) + fibonacci (x -2));
    }
}


int main(){
    int j, l = 0;

    cout <<"Masukkan batas jumlah bilangan fibonacci : \n";
    cin >> j;

    cout <<"Hasil bilangan fibonacci : \n";
    for(int k = 1;  k <= j ; k++){
        cout <<"Fibonacci ke- "<< k <<" : "<< fibonacci(l)<<endl;
        l++;
    } 

    






    return 0;

}
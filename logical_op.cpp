# include<iostream>
using namespace std;

int main(){

    int x = 90;
    int y = 70;
    int z = 120;

    /*
    Simbol gerbang logika dalam c++
    - AND (&&) 
    - OR (||)
    - NOT (!)
    - XOR (^)
    */
    cout << x << '\n' << (x < 100 && x > 70) <<'\n';
    cout << y << '\n' << (y < 100 || y > 70) <<'\n';
    cout << z << '\n' << (z < 100 ^ z > 80) <<'\n';

    bool a = true;
    bool b = false;
    bool c = false;

   

    cout << "nilai a AND b" << '\n' << (a && b)<<'\n';
    cout << "nilai a AND c" << '\n' << (a && c)<<'\n';
    cout << "nilai b AND c" << '\n' << (b && c)<<'\n';
    cout << "nilai a OR b" << '\n' << (a || b)<<'\n';
    cout << "nilai a OR c" << '\n' << (a || c)<<'\n';
    cout << "nilai b OR c" << '\n' << (b || c)<<'\n';

        





}
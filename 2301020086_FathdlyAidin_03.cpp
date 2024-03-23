# include <iostream> 
using namespace std;


class Persegi{
    private:   
        float panjang;
        float lebar;
        float tinggi;

    public:
        Persegi(float P_Persegi, float L_Persegi, float T_Persegi)
            : panjang(P_Persegi), lebar(L_Persegi), tinggi(T_Persegi)
        {
        
        }
        float get_luas(){
            return panjang * lebar;
        }

        float get_volume_balok(){
            return panjang * lebar * tinggi;
        }

        ~Persegi(){
            cout <<"Luas Persegi : "<<persegi.get_luas()<< endl;
            cout <<"Volume Persegi : "<<persegi.get_volume_balok()<< endl;
        }
};

int main(){
 
 
 
    Persegi persegi(5,3,4);

    return 0;




}
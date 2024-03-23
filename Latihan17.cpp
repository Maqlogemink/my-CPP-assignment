#include <iostream>
using namespace std;

class heroes {
    public:

        int strength(int values){
            cout <<" strength : " << values << endl;
        
            return values;
        }

        int constitution(int values){
            cout<<" constitution : "<< values <<endl;
        
            return values;
        }

        int dexterity(int values){
            cout<<" dexterity : "<< values <<endl;
            
            return values;
        }

        int intellegence(int values){
            cout<<" intellegence : "<< values <<endl;
           
            return values;
        }

        int charisma(int values){
            cout<<" charisma : "<< values <<endl;
            
            return values;
        }

        int wisdom(int values){
            cout<<" wisdom :  "<< values <<endl;
           
            return values;
        }

};

int main(){

    heroes Franco;
    cout << "Franco Heroes Stat : \n";
    int str = Franco.strength(92);
    int con = Franco.constitution(78);
    int itl = Franco.intellegence(68);
    int wsd = Franco.wisdom(82);
    int chr = Franco.charisma(89);

 

}
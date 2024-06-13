# include <iostream> 
# include <algorithm>
using namespace std;

int main(){
    
     // algoritma pengurai kata 
     
     
    string name = "jokowi";
    const char* nama = name.c_str();
    char alphabet[6] = {'j','f','w','i','o','o'};
    string result;
    
    
    for(int i = 0; i < sizeof(nama); i++){
        for(int j = 0; j < (sizeof(alphabet)); ++j){
            if(nama[i] == alphabet[j]){
                result += alphabet[j];
                break;
            }
            if(nama[j] != alphabet[j]){
                continue;
            }

            
        }
    }
    
    if(result != name){
        cout << "tidak bisa mengurai kata dengan huruf tsb" << endl;
    }
    else {
        cout << result << endl;
        
        
    }
    
    
    

}
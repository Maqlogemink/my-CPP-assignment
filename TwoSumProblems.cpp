#include <iostream>
#include <vector>
using namespace std;


class Solution{

public:

    vector <int> TwoSum(vector <int> nums, int target){
        
        vector<int> target_indices;
        
        for(vector<int>:: iterator i=nums.begin(); i != nums.end(); i++ ){
            for(vector<int>::iterator j = i+1; j !=nums.end(); j++){
                if(*j + *i == target){
                    target_indices.push_back(*i);
                    target_indices.push_back(*j);
                    break;
                    
                }
            }
        }
        
        return target_indices; 
    }
    
    
};

int main() {
    
    vector <int> arr = {5,10,15,20,25,30,35};
    int target = 45;
    
    Solution solution01; 
    vector<int> result = solution01.TwoSum(arr,target);

    for(auto x : result){
        cout << x <<" ";
    }
    
    
    
    
    
    return 0;
}
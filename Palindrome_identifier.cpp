#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
private:
    vector<string> reversedNum;
    vector<string> num;

public:
    void reversingNum(vector<int> x) {
        string converted;

        for(int k : x){
            converted += to_string(x[k]);
        }

        for (int n : x) {
            num.push_back(string(1, converted[n]));
        }
        reversedNum = num;
        reverse(reversedNum.begin(), reversedNum.end());
    }

    bool isPalindrome() {
        return num == reversedNum;
    }
};

int main() {
    vector <int> origin;
    int  buffer;
    cout << "Masukkan banyak angka: ";
    cin >> buffer;

    for (int  i = 0; i < buffer; i++) {
        int value;
        cout << "Masukkan angka yang ingin disimpan: ";
        cin >> value;
        origin.push_back(value);
    }

    Solution checkNum;
    checkNum.reversingNum(origin);

    if (checkNum.isPalindrome()) {
        cout << "Merupakan angka palindrom\n";
    } else {
        cout << "Bukan merupakan angka palindrom\n";
    }

    return 0;
}
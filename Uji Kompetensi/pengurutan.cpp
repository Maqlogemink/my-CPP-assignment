#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<string> dataUrut ;
    dataUrut.push_back("3");
    dataUrut.push_back("5");
    dataUrut.push_back("2");
    dataUrut.push_back("7");
    dataUrut.push_back("9");
    cout << "Data sebelum diurut : " <<endl;
    for(int i=0;i<dataUrut.size();i++){
        cout << dataUrut[i] << " - ";
    }

    sort(dataUrut.begin(), dataUrut.end());

    cout << "\n\nData setelah diurutakan : " <<endl;
    for(int i=0;i<dataUrut.size();i++){
        cout << dataUrut[i] << " - ";
    }

}
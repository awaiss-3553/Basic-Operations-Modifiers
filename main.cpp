#include <iostream>
#include<string>
#include <vector>
using namespace std;

int main(){
    vector<int> vec={10, 20, 30, 40, 50};
    vec.push_back(60);
    vec.pop_back();
    vec.erase(vec.begin()+2);



    for(auto it =vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }


};

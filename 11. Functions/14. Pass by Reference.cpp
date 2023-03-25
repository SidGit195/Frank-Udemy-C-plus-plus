// We can also save our memory(in case of large data) in pass by reference method and able to change actual parameters.

//Pass by reference
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v);

int main(){
    vector<int> data {1,2,3,4,5};
    print(data);
    return 0;
}

// void print(vector<int> &v){         //here we can not creating another copy, we save our memory.
                                       //but this mthd not recommended bcz print vector could change or erase value of data 
void print(const vector<int> &v){      //Now we not able to change actual parameter.
    // v.at(0) = 200;                     //ERROR                        
    for(auto num: v)                
        cout << num << endl;
}
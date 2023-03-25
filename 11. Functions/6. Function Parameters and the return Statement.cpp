//Function Parameters
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

void pass_by_value1(int num){
    num = 1000;
}

void pass_by_value2(string s){
    s = "changed";
}

void pass_by_value3(vector<string> v){

}

int main(){
    
    return 0;
}

//Simply pass by value
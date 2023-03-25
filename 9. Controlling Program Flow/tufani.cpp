#include<iostream>
using namespace std;

int main(){
    string s;
    int z, t{}, tp{}, tpp{}, o1{0}, o2{0}, o3{0};
    char p{'c'};
    // cin >> z;

    cin >> s;
    
        for(auto c: s){
            if(c != p && o1 == 0){
                t = 1;
                tpp = 1;
                o1 = 1;
            }
            else if(c != p && o2 == 0){
                t = 2;
                tp = 2;
                o2 = 1;
                o3 = 1;
            }
            else if(c != p && c != '\0'){
                t = tpp + tp;
                tpp = tp;
                tp = t;
            }
            else{
                t = t;
                if(o3 == 0){
                    tpp = 1;
                }
                else{
                    tpp = tp;
                }
                tp = t;
            }
            p = c;
        }
    cout << t;

        return 0;
}
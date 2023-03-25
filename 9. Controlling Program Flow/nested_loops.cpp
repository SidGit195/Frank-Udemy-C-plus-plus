#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int>> vector_2d
    // {
    //     {1, 2, 3},
    //     {10, 20, 30, 40},
    //     {100, 200, 300, 400, 500}
    // };

    // for(auto vec: vector_2d){
    //     for(auto val: vec){
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }

    int num_iterms{};
    cout << "How many number iterms, Do you want ?" << endl;
    cin >> num_iterms;

    vector<int> data{};

    for(int i{1}; i<=num_iterms; ++i){
        int data_item{};
        cout << "Enter data iterm " << i << endl;
        cin >> data_item;
        data.push_back(data_item);
    }

    for(auto v: data){
        for(int i{1}; i<=v; ++i){
            if(i%5 == 0){
                cout << "*";
            }
            else{
                cout << "-";
            }
        }
        cout << endl;
    }

    return 0;
}
//when we pass array, we not pass the complete array, we only pass address of the first element of the array
// that's why we pass array as well as size of array in a function.

//Arrays & functions
#include<iostream>
using namespace std;

void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int num);

void print_array(const int arr[], size_t size){
    for(int i{0}; i<size; ++i)
        cout << arr[i] << " ";
    cout << endl;
    // arr[0] = 500;    //bug
}

void set_array(int arr[], size_t size, int num){
    for(int i{0}; i<size; ++i)
        arr[i] = num;
}

int main(){
    int num_arr[] {1,2,3,4,5};
    
    print_array(num_arr, 5);
    set_array(num_arr, 5, 70);
    print_array(num_arr, 5);
    return 0;
}

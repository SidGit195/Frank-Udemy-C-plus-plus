#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (Functor): Function wrapped in the class so that it is available like an object
    int arr[] = {8, 3, 0, 5, 2, 9};
    // sort(arr, arr+5);
    sort(arr, arr+6, greater<int>());

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
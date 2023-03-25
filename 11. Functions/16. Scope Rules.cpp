//****Note = Static ka arth constant nhii hota hai, bas vo dobara se initialize nhii hota hai jo value hote hai previous vahi se start hota hai (value change ho sakte hai)
#include<iostream>
using namespace std;

int num {30};      //Global variable

void global_example(){
    cout << "\n" << num << endl;
    num *= 2;
    cout << num << endl;
}

void static_local_example(){
    static int num {5000};          //****Initialize only once(first time), if function call 2nd(example) then it take previous value
    cout << "\n" << num << endl;
    num += 1000;
    cout << num << endl;
}
int main(){
    int num {100};      //local to main
    int num1 {500};     //local to main

    cout << "local num is: " << num << " in main " << endl;

    {//Create a new level of scope
        int num {200};
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    return 0;
}
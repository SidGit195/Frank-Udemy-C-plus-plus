// Logical Operators
#include<iostream>
using namespace std;

int main(){
    int num{};
    const int lower{10};
    const int uper{20};

    cout << boolalpha;

    //assume lower < uper
    cout << "Enter an integer - the bounds are " << lower << " and " << uper << " : ";
    cin >> num;

    bool within_bounds {false};

    within_bounds = (num > lower && num < uper);
    cout << num << " is between " << lower << " and " << uper << " : " << within_bounds << endl;
    
    //--------------------------------------------------------------------------------------------------

    //Determine if an entered integer is outside two others integer
    //assume lower < upper
    // cout << "Enter an integer - the bounds are " << lower << " and " << uper << " : ";
    // cin >> num;

    // bool outside_bounds {false};

    // outside_bounds = (num < lower || num > uper);
    // cout << num << " is outside of the integer " << lower << " and " << uper << " : " << outside_bounds << endl;

    //---------------------------------------------------------------------------------------------------

    //Determine if an integer is exactly on the boundry
    //assume lower < uper
    // cout << "Enter an integer - bounds are " << lower << " and " << uper << " : ";
    // cin >> num;

    // bool on_bounds {false};

    // on_bounds = (num == lower || num == uper);
    // cout << num << " is on one of the bounds which are " << lower << " and " << uper << " : " << on_bounds << endl;

    //----------------------------------------------------------------------------------------------------

    //Determine is you need to wear a coat based on temperature and wind speed
    
    return 0;
}
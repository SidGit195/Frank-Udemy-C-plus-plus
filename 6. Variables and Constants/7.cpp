#include<iostream>
#include<climits>   //make sure you include climits for integer types
                    //Similar information for floating point numbers
                    // is contained in <cfloat>

using namespace std;

int main(){
    cout << "sizeof information" << endl;
    cout << "==============================" << endl;

    int t {45};
    cout << sizeof(int)<< endl;
    cout << sizeof (unsigned int)<< endl;
    cout << sizeof (short)<< endl;
    cout << sizeof(float)<< endl;
    cout << sizeof(double)<< endl;
    cout << sizeof(5)<< endl;
    cout << sizeof(t)<< endl;
    cout << sizeof t<< endl;
    cout << sizeof (char)<< endl;
    cout << sizeof (long)<< endl;
    cout << sizeof (long long)<< endl;

    
    cout << "==============================" << endl;
    cout << "float: "<< sizeof(float) <<" bytes" << endl;
    cout << "double: "<< sizeof(double)<<" bytes" << endl;
    cout << "long double: "<< sizeof(long double)<<" bytes"<< endl;

    // use values defined in <climits>
    cout << "==============================" << endl;
    cout << "Minimum values:" << endl;
    cout << "char: "<< CHAR_MIN << endl;
    cout << "int: "<< INT_MIN << endl;
    cout << "short: "<< SHRT_MIN << endl;
    cout << "long: "<< LONG_MIN << endl;
    cout << "long long: "<< LLONG_MIN << endl;


    cout << "==============================" << endl;
    cout << "Maximum values:" << endl;
    cout << "char: "<< CHAR_MAX << endl;
    cout << "int: "<< INT_MAX << endl;
    cout << "short: "<< SHRT_MAX << endl;
    cout << "long: "<< LONG_MAX << endl;
    cout << "long long: "<< LLONG_MAX << endl;
    
    return 0; 
}
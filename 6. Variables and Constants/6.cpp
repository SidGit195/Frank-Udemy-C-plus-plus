// Primitive type
#include<iostream>
using namespace std;

int main(){
    // character type
    char middle_initial {'l'};  // Notice the single quotes around characters.
    cout << "My middle initial is " << middle_initial << endl;

    // Integer type
    unsigned short int exam_score {75}; // same as unsigned short exam_score {75};
    cout << "My exam score was "<< exam_score << endl;

    int countries_represented {65};
    cout << "There are "<< countries_represented << " represented in my meeting"<< endl;

    long people_in_india {130000000};
    cout << "There are about "<< people_in_india << " present in india"<< endl;

    long long people_on_earth {7600000000};     // overflow in long
    cout << "There are about "<< people_on_earth << " present on earth"<< endl;

    long long distance_to_alpha_centuri {9461000000000};
    cout <<"The distance to alpha centuri is "<< distance_to_alpha_centuri << " Kilometers" << endl;

    // Floating point types
    float car_payment {100.99};
    cout <<"My Car payment is "<< car_payment <<endl;

    double pi {3.14159};
    cout << "Pi is "<< pi << endl;

    long double large_number {2.7e120};
    cout << large_number << " is a huge number"<< endl;

    // Boolean type
    bool game_over {false};
    cout << "The value of game_over is "<< game_over << endl;   //In C++ '0' is false

    // Overflow example
    short value2 {1000};
    short value1 {30000};
    short product {value1*value2};
    cout << "The product of " << value1 << " and " << value2 << " is " << sum << endl;

    return 0;
}
#include<iostream>
using namespace std;

const double pi {3.14159};

double calc_area_circle(double radius){
    return pi*radius*radius;
}

void area_circle(){
    double radius{};
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "The area of the circle having radius " << radius << " is " << calc_area_circle(radius) << endl;
}

int main(){
    area_circle();
    return 0;
}
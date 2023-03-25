#include<iostream>
#include<vector>
using namespace std;

int main(){
vector <int> vector1;
vector <int> vector2;

int t1, t2;
cout << "Enter two numbers to add in vector1" << endl;
cin >> t1 >> t2;

vector1.push_back(t1);
vector1.push_back(t2);

cout << vector1.at(0) <<endl;
cout << vector1.at(1) <<endl;
cout << "Vector1 contain " << vector1.size() <<" elements\n"<< endl;

cout << "Enter two numbers to add in vector2" << endl;
cin >> t1 >>t2 ;

vector2.push_back(t1);
vector2.push_back(t2);

cout << vector2.at(0) <<endl;
cout << vector2.at(1) <<endl;
cout << "Vector2 contain " << vector2.size() <<" elements\n"<< endl;

// Now 2D vector
vector<vector<int>> vector_2d;

vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

cout << "\nElement of vector_2d"<<endl;
cout << vector_2d.at(0).at(0) <<endl;
cout << vector_2d.at(0).at(1) <<endl;
cout << vector_2d.at(1).at(0) <<endl;
cout << vector_2d.at(1).at(1) <<endl;
cout << "Vector_2d contain " << vector_2d.size() <<" elements" << endl;

vector1.at(0) = 1000;
vector_2d.push_back(vector1);
cout << "\nUpdated Element of vector_2d"<<endl;
cout << vector_2d.at(0).at(0) <<endl;
cout << vector_2d.at(0).at(1) <<endl;
cout << vector_2d.at(1).at(0) <<endl;
cout << vector_2d.at(1).at(1) <<endl;
cout << vector_2d.at(2).at(0) <<endl;   // Hopefully you understand

cout <<"Updated elements of vector1" << endl;
cout << vector1.at(0) <<endl;
cout << vector1.at(1) <<endl;
return 0;
}
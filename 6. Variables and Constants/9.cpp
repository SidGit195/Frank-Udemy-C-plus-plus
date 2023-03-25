#include<iostream>
using namespace std;

int main(){
   cout <<"Welcome! Frank's Carpet Cleaning Service" << endl;
   cout <<"Enter Number of rooms would you want for service ?" << endl;
   cout <<"Per room charge is $30"<< endl;
   cout <<"Sales rate is 6%" << endl;

   int n {0};
   cin >> n;
   
   int cost {n*30};
   double tax {n*30*0.06};
   double tc = cost + tax;
   
   cout <<"======================================"<< endl;
   cout <<"Cost of rooms: "<< cost <<endl;
   cout <<"Sales tax: "<< tax <<endl;
   cout <<"Total estimate: "<< tc <<endl;
   cout <<"This estimate is valid for 30 days";
   return 0;
}  
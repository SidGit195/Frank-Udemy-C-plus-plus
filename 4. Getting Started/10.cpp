#include<iostream>

int main(){
    int fav_num;
    std::cout << "Enter your favourite number b/w 1 & 100" << std::endl;
    std::cin >> fav_num ;

    std::cout << "Amazing!!, That is my favourite number too!" << std::endl;
    std::cout << "NO really, "<< fav_num << " is my favourite number!";

    return 0;
}
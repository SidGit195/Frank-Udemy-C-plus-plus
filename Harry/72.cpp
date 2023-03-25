#include<iostream>
#include<list>
using namespace std;

//linked list by stl

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main(){
    list<int> list1;    //list of 0 length
    list1.push_back(4);
    list1.push_back(2);
    list1.push_back(9);
    list1.push_back(7);

    // list<int> :: iterator iter;     // Make a iterator
    // iter = list1.begin();
    // cout << *iter;
    // iter++;
    // cout << *iter;

    display(list1);
    // Removing elements from the list
    // list1.remove(2);
    // list1.pop_back();
    // list1.pop_front();
    
    // Sorting the list
    // list1.sort();
    // display(list1);

    // Reversing list1
    list1.reverse();
    display(list1);

    list<int> list2(4); //empty list of size 4
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 3;
    iter++;
    *iter = 6;
    iter++;
    *iter = 8;
    display(list2);

    list1.merge(list2);
    display(list1);
    return 0;
}
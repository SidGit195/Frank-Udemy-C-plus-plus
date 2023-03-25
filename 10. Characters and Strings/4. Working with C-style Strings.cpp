#include<iostream>
#include<cstring>   // for c-style string functions
#include<cctype>    // for character based functions
using namespace std;

int main(){
    char firstname[20] {};
    char lastname[20] {};
    char fullname[20] {};
    char temp[50] {};
//
//     cout << "Please enter your first name:" << endl;
//     cin >> firstname;
//     cout << "Please enter your last name:" << endl;
//     cin >> lastname;
//     cout << "---------------------------------------------" << endl;
//
//     cout << "Hello, " << firstname << " your first name has " << strlen(firstname) << " characters" << endl;
//     cout << "and your last name " << lastname << " has " << strlen(lastname) << " characters" << endl;
//     cout << "You full name is " << fullname << endl;
//
//     strcpy(fullname, firstname);    // copy firstname to fullname
//     strcat(fullname, " ");          // concatenation fullname & space
//     strcat(fullname, lastname);     // concatenation lastname to fullname
//     cout << lastname << endl;
    
    // cout << "----------------------------------------" << endl;
    // cout << "Enter your full name: " << endl;
    // cin >> fullname;    
    // cout << "Your full name is " << fullname << endl;

    cout << "Enter your full name: ";
    cin.getline(fullname, 40);          // ****Input of string with white-space
    cout << "Your full name is " << fullname << endl;

    cout << "---------------------------------------------" << endl;
    strcpy(temp, fullname);
    if(strcmp(temp, fullname)==0){      // ****Concept
        cout << temp << " and " << fullname << " are the same " << endl;
    }
    else{
        cout << temp << " and " << fullname << " are the different " << endl;
    }

    for(size_t i{0}; i<strlen(fullname); ++i){      //****Concept
        if(isalpha(fullname[i]))
            fullname[i] = toupper(fullname[i]);
    }
    cout << "Your full name is " << fullname << endl;

    cout << "---------------------------------------------" << endl;
    if(strcmp(temp, fullname)==0){
        cout << temp << " and " << fullname << " are the same " << endl;
    }
    else{
        cout << temp << " and " << fullname << " are the different " << endl;
    }

    cout << "----------------------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << fullname << ": " << strcmp(temp, fullname) << endl;
    cout << "Result of comparing " << fullname << " and " << temp << ": " << strcmp(fullname, temp) << endl;

    return 0;
} 
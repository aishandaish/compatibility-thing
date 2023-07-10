#include <iostream>
#include <cstdlib>
#include <cmath>
#include "flames.h"
#include "numberTest.h"

using namespace std;

int main(){
    string person1;
    string person2;
    int testType;


    cout << "Welcome to the Compatibility Test!" << endl;
    cout << "In this test you will go through 2 tests to see how compatibile you and another person are!" << endl;

    cout <<  "Please enter person 1's name now: " << endl;
    cin >> person1;
    
    cout <<  "Please enter person 2's name now: " << endl;
    cin >> person2;

    cout << "Which Test would you like to test first? Enter '1' for FLAMES or '2' for Number" << endl;

    cin >> testType;

    if (testType == 1){
        

    }

    else if (testType == 2){


    }
    else {
        return 1;

    }



    return 0;
}
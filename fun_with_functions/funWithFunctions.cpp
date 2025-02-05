#include <iostream>
#include <string>

using namespace std;

// function definitions
int getAnIntFromTheUser(){
    int userInput;
    cout << "Enter a number: " << endl;
    cin >> userInput;
    return userInput;
}

bool compareTwoInts() {
    return (getAnIntFromTheUser() == getAnIntFromTheUser());
}

int sumTwoInts(const int num1, const int num2) {
    return num1 + num2;
}


int main() {
    int const number = getAnIntFromTheUser();
    cout << "You entered the number: " << number << endl;

    if (compareTwoInts()) {
        cout << "The integers are equal" << endl;
    }else {
        cout << "The integers are not equal" << endl;
    }
    const int sum = sumTwoInts(getAnIntFromTheUser(), getAnIntFromTheUser());
    cout << "The sum of the integers is: " + to_string(sum) << endl;
    return 0;
}
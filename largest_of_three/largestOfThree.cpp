// largestOfThree.cpp
// CIT 66 Spring 2025
// Created by Mark Edmunds
// Created on 2-4-2025
// The program determines the largest of three entered integers


#include <iostream>
#include <string>

using namespace std;
// getAnIntFromTheUser from funWithFunctions
int getAnIntFromTheUser(){
    int userInput;
    cout << "Enter a number: " << endl;
    cin >> userInput;
    return userInput;
}
// while loop implementation
int largestOrThree(const int num ) {
    int largest = 0;
    int i = 1;
    while (i < 3 ) {
        i++;
        const int userInput = getAnIntFromTheUser();
        largest = (num > userInput) ? num : userInput;
    }
    return largest;
}
// if statement implementation
int largestOfThree() {

    int largest = 0;
    const int num1 = getAnIntFromTheUser();
    const int num2 = getAnIntFromTheUser();
    const int num3 = getAnIntFromTheUser();

    if (num1 > num3) {
        largest = (num1 > num2) ? num1 : num2;
    }else {
        largest = (num3 > num2) ? num3 : num2;
    }
    return largest;
}

int main() {

    const int largest = largestOfThree();
    cout << "The largest of the three is: " + to_string(largest) << endl;

    return 0;
}
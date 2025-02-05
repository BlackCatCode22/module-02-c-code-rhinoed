#include <iostream>

using namespace std;

int getAnIntFromTheUser(){
    int userInput;
    cout << "Enter a number: " << endl;
    cin >> userInput;
    return userInput;
}

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
#include <iostream>
#include <string>

using namespace std;


int main() {
    // setup
    string userString;
    string reversedString;
    // prompt user
    cout << "Enter your string: " << endl;
    // read line
    getline(cin, userString);
    // get length of string
    string::size_type const length = userString.size();
    // loop over string in reverse
    for ( string::size_type i = length; i > 0; i--) {
        // append to string
        reversedString.append(1, userString[i - 1]);
    }
    // output
    cout << reversedString << endl;
    return 0;
}
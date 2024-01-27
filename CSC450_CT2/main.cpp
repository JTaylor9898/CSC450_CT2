#include <iostream>
#include <string>
using namespace std;
int main() {
    string stringOne, stringTwo;

    cout << "Enter first String: " << endl; // prompt for user input
    getline(cin, stringOne); // resulting string from user input
    cout << "Enter second String: " << endl;
    getline(cin, stringTwo); // the simple 'cin' considers space as command for end of string
    cout << " " << endl;
    
    string result = stringOne + " " + stringTwo; // combine strings. Could use 'stringOne.append(stringTwo)' if desired
    cout << result << endl;
    cout << result.size() << endl;
}

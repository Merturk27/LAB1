#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string studentID;

    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << "Hello " << name << "." << endl;

    cout << "What is your Student ID?" << endl;
    getline(cin, studentID);

    cout << "Your ID is " << studentID << "." << endl;

    return 0;
}
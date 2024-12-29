#include <iostream>
#include <iomanip>

#define PI 3.141592653
#define endl "\n"

using namespace std;

int main() {
    char c;
    cin >> c;
    if(c >= 48 && c <= 57) {
        cout << "IS DIGIT";
    } else if(c >= 65 && c <= 90) {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    } else if(c >= 97 && c <= 122) {
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }
    return 0;
}
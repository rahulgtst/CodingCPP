#include <iostream> 
#include<iomanip>

#define PI 3.141592653

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a >= b) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
#include <iostream> 
#include<iomanip>

#define PI 3.141592653

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b) {
        if(b > c) {
            cout << c << " " << a;
        } else {
            cout << b << " " << a;
        }
    } else {
        if(a > c) {
            cout << c << " " << b;
        } else {
            cout << a << " " << b;
        }
    }
    return 0;
}
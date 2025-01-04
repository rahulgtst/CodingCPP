#include <iostream> 
#include<iomanip>

#define PI 3.141592653

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a >= b && a >= c) {
        if(b >= c) cout << c << " " << a;
        else cout << b << " " << a;
    }
    else if(b >= a && b >= c) {
        if(a >= c) cout << c << " " << b;
        else cout << a << " " << b;
    } 
    else if(c >= b && c >= a) {
        if(b >= a) cout << a << " " << c;
        else cout << b << " " << c;
    }
    return 0;
}
#include <iostream> 
#include<iomanip>

#define PI 3.141592653

using namespace std;

int main() {
    float r;
    cin >> r;
    cout << fixed << setprecision(9);
    cout << PI * r * r;
    return 0;
}
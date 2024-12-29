#include <iostream> 
#include<iomanip>

#define PI 3.141592653

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if( a % b == 0 || b % a == 0 ) cout << "Multiples";
    else cout << "No Multiples";
    return 0;
}
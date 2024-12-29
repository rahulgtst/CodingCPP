#include <iostream> 
#include<iomanip>

#define PI 3.141592653

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;
    if(a == 0 && b == 0) {
        cout << "Origem";
    } else if(a == 0) {
        cout << "Eixo Y";
    } else if(b == 0) {
        cout << "Eixo X";
    } else if(a > 0){
        if(b > 0) {
            cout << "Q1";
        } else {
            cout << "Q4";
        }
    } else {
        if(b > 0) {
            cout << "Q2";
        } else {
            cout << "Q3";
        }
    }
    return 0;
}
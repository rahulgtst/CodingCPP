#include <iostream>
#include <iomanip>

#define endl "\n"
#define PI 3.141592653

using namespace std;

void solve(){
    int num;
    while(true) {
        cin >> num;
        if(num == 1999) {
            cout << "Correct";
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return;
}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
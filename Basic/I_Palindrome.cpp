#include <iostream>
#include <iomanip>

#define endl "\n"
#define PI 3.141592653

using namespace std;

void solve(){
    int num;
    cin >> num;
    int x = num;
    int rev = 0;
    while(x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    cout << rev << endl;
    if(rev == num) cout << "YES";
    else cout << "NO";
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
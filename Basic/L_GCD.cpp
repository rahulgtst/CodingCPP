#include <iostream>
#include <iomanip>

#define endl "\n"
#define PI 3.141592653

using namespace std;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

void solve(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
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
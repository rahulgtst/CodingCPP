#include <iostream>
#include <iomanip>

#define endl "\n"
#define PI 3.141592653

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll factorial(ll n) {
    if(n == 0 || n == 1) return 1;
    ll result = 1;

    for(ll i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

void solve(){
    return;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
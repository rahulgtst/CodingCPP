#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

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

vector<int> divisors(int n) {
    vector<int> divisor;

    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            divisor.push_back(i);
            if(i != n/i) divisor.push_back(n/i);
        }
    }

    return divisor;
}

void printArray(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

bool isPrime(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

vector<int> primeNumbers(int n) {
    vector<int> result;
    
    for(int i = 2; i <= n; i++) {
        if(isPrime(i)) result.push_back(i);
    }

    return result;
}

void printLeftTrianglePattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void solve(){
    int n;
    cin >> n;
    printLeftTrianglePattern(n);
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
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

void printPyramid(int n) {
    string stars = "*";
    for(int i = 1; i <= n; i++) {
        string pattern = stars;
        for(int j = i; j < n ; j++) {
            pattern = " " + pattern;
        }
        cout << pattern << endl;
        stars = "*" + stars + "*";
    }
}

inline void rtrim(string &s) {
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), s.end());
}

void printDownPyramid(int n) {
    string stars = "";
    for(int i = 0; i < 2 * n - 1; i++) {
        stars += "*";
    }
    for(int i = 0; i < n; i++) {
        string pattern = stars;
        for(int j = 0; j < i; j++) {
            pattern[j] = ' ';
            pattern[2 * n - 2 - j] = ' ';
        }
        rtrim(pattern);
        cout << pattern << endl;
    }
}

void printDiamond(int n) {
    printPyramid(n);
    printDownPyramid(n);
}

void solve(){
    int n;
    cin >> n;
    printDiamond(n);
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
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

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i -1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

bool isPallindrome(vector<int>& arr) {
    int n = arr.size();

    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-i-1]) return false;
    }

    return true;
}

int linearSearch(vector<int>& arr, int x) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) return i;
    }

    return -1;
}

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = 1;

    while(k <= n) {
        for(int i = 0; i < n - k + 1; i++) {
            int res = -1000000000;
            for(int j = 0; j < k; j++) {
                res = max(res, arr[i + j]);
            }
            cout << res << " ";
        }
        k++;
    }
    cout << endl;
    
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
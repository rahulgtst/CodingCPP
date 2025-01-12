#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

#define endl "\n"
#define PI 3.141592653
#define loop(n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

vector<int> dx = {-1, 0, 0, 1};
vector<int> dy = {0, -1, 1, 0};
vector<int> ddx = {-1, -1, -1, 0, 0, 1, 1, 1};
vector<int> ddy = {-1, 0, 1, -1, 1, -1, 0, 1};

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

bool linearSearchInMatrix(vector<vector<int>>& arr, int x) {
    int n = arr.size();
    int m = arr[0].size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == x) return true;
        }
    }

    return false;
}

bool isSubsequence(vector<ll>& a, vector<ll>& b) {
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;

    while(i < n && j < m) {
        if(a[i] == b[j]) j++;
        i++;
    }

    return j == m;
}

bool isValidCell(int n, int m, int x, int y) {
    return (x >=0 && x < n && y >= 0 && y < m);
}

bool isAllNeighbourX(vector<vector<char>>& arr, int x, int y) {
    int n = arr.size();
    int m = arr[0].size();

    for(int i = 0; i < 8; i++){
        int cx = x + ddx[i];
        int cy = y + ddy[i];
        if(isValidCell(n, m, cx, cy)) {
            if(arr[cx][cy] != 'x') return false;
        }
    }

    return true;
}

int binarySearch(vector<ll>& arr, ll x) {
    int n = arr.size();

    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

void solve(){
    ll n, result = 0, i = 5;
    cin >> n;

    while(i <= n) {
        result += n/i;
        i *= 5;
    }

    cout << result;
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
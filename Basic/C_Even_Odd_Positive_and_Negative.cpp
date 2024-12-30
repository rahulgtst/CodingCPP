#include <iostream>
#include <iomanip>

#define endl "\n"
#define PI 3.141592653

using namespace std;

void solve(){
    int n;
    cin >> n;
    int num;
    int pos = 0, neg = 0, even = 0, odd = 0;
    while(n--) {
        cin >> num;
        if(num > 0) pos++;
        else if(num < 0) neg++;

        if(num & 1) odd++;
        else even++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

}

int main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
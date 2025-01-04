#include <iostream>
#include <iomanip>

#define endl "\n"
#define PI 3.141592653

using namespace std;

void solve(){
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    // if(r1 >= l2) {
    //     if(r1 <= r2) {
    //         if(l2 >= l1) cout << l2 << " " << r1 << endl;
    //         else cout << l1 << " " << r1 << endl;
    //     }
    //     else cout << l2 << " " << r2 << endl;
    // } else {
    //     if(l2 <= l1 && r1 <= r2) cout << l1 << " " << r1 << endl;
    //     else if(l2 <= l1 && r1 > r2) cout << l1 << " " << r2 << endl;
    //     else cout << -1 << endl;
    // }

    if(l1 <= l2) {
        if(r1 <= r2) {
            if(l2 <= r1) cout << l2 << " " << r1;
            else cout << -1;
        } else {
            cout << l2 << " " << r2;
        }
    } else {
        if(r2 <= r1) {
            if(l1 <= r2) cout << l1 << " " << r2;
            else cout << -1;
        } else {
            cout << l1 << " " << r1;
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
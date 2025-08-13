#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll computeSum(ll n) {
    ll sum = 0;
    while (n > 0) 
    {
        sum += n;
        n /= 2; // move to parent
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << computeSum(n) << '\n';
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if(n % 2 != 0)
        return 0;

    int ans = n / 4;

    if(n % 4 == 0)
        ans--; // exclude square

    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}

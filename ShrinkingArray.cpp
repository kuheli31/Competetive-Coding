#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) <= 1)
            return 0; // Already beautiful
    }

    if (n == 2)
        return -1;

    return 1; // Can make it beautiful in 1 operation
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << solve(arr, n) << "\n";
    }

    return 0;
}

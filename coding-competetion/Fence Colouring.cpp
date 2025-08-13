#include <bits/stdc++.h>
using namespace std;

int solve(int n , vector<int> &arr)
{
    unordered_map<int, int> freq;
    for (int x : arr) freq[x]++;

    int maxfreq = 0;
    for (auto &p : freq)
        maxfreq = max(maxfreq, p.second);

    int costA = n - freq[1];         // repaint all non-1 fences individually
    int costB = 1 + (n - maxfreq);   // paint all once with most frequent, then fix

    return min(costA, costB);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        cout << solve(n , arr) << "\n";
    }
}

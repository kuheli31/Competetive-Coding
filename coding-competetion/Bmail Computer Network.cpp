#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[], int n) {
    vector<int> res;
    int curr = n;
    while (curr != 1) 
    {
        res.push_back(curr);
        curr = arr[curr];
    }
    res.push_back(1); 
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int arr[n + 1]; 
    for (int i = 2; i <= n; i++) 
    {
        cin >> arr[i];
    }

    vector<int> path = solve(arr, n);
    for (int x : path) cout << x << " ";
    cout << "\n";

    return 0;
}

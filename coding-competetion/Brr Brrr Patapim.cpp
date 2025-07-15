#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<vector<int>> &grid) {
    vector<int> store;
    vector<int> res(2 * n + 2, 0); 

    // store all numbers from 1 to 2n
    for (int i = 1; i <= 2 * n; i++) {
        store.push_back(i);
    }

    // fill res[i+j+2] = grid[i][j]
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k = i + j + 2;
            res[k] = grid[i][j];
        }
    }

    // find missing number from 1 to 2n and place it in res[1]
    for (int i = 0; i < store.size(); i++) {
        if (find(res.begin() + 2, res.end(), store[i]) == res.end()) {
            res[1] = store[i];
            break;
        }
    }

    for (int i = 1; i <= 2 * n; i++) {
        cout << res[i] << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n)); 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        solve(n, grid);
    }
    return 0;
}

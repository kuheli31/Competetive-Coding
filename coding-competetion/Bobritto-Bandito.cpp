#include <bits/stdc++.h>
using namespace std;

void solve(int n , int m , int l , int r , vector<pair<int , int>> &res){
    int l1 = l, r1 = r;
    
    // Move inward from final [l, r] segment to get segment at day m
    while ((r1 - l1) > m) {
        // Shrink from the left if possible
        if (l1 < 0) l1++;
        // Otherwise shrink from the right
        else r1--;
    }

    res.push_back({l1 , r1});
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        vector<pair<int , int>> res;
        int n , m , l , r;      
        cin >> n >> m >> l >> r;
        solve(n , m , l , r , res);
        for (auto &p : res) {
            cout << p.first << " " << p.second << "\n";
        }
    }
    return 0;
}

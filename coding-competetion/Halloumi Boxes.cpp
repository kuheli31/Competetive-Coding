#include <bits/stdc++.h>
using namespace std;

string solve(vector<int>& arr, int n, int k)
{
	vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    
    if (arr == sortedArr || k>1) return "YES";
 
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        cout << solve(arr, n, k) << '\n';
    }
    return 0;
}
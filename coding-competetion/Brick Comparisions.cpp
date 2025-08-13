#include <bits/stdc++.h>
using namespace std;

long solve(int &n , vector<int> &arr)
{
    int count = 1;          // start with brick number 1
    int curr = arr[0];      // Chef starts with first brick
    
    for(int i = 1 ; i < n ; i++)   // fixed: loop within bounds
    {
        if(arr[i] > curr)   // strictly larger brick
        {
            count = i + 1;  // store brick number (1-based)
            curr = arr[i];
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        cout << solve(n , arr) << endl;
    }
    return 0;
}

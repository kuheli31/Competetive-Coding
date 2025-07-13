#include <bits/stdc++.h>
using namespace std;

bool solve(int a , int x , int y)
{
	// Alice's Distance
	int ax = abs(a - x);
	int ay = abs(a - y);

	// Bob's Distance
	for(int b = 1; b <= 100; b++)
	{
		if (b == a) continue; // Skip Alice's position
		int bx = abs(b - x);
		int by = abs(b - y);
		if(bx < ax && by < ay) // Must be strictly less
		{
			return true;
		}
	}
	return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--)
    {
        int a, x, y;
        cin >> a >> x >> y;
        if(solve(a, x, y))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
	}
    return 0;
}
